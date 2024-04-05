#include "graph.h"
#include <iostream>

Graph::Graph() {}

int **Graph::createGraph(const int &N)
{
    int **arr = new int *[N];

    for (int i = 0; i < N; i++)
        arr[i] = new int[N];

    return arr;
}

void Graph::printGraph(int **graph, int N)
{
    std::cout << "Matrix representation of the graph:\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            std::cout << graph[i][j] << " ";

        std::cout << "\n";
    }
}

void Graph::deleteGraph(int **arr, const int &N)
{
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;
}

bool Graph::hasCycle(int **matrix, int N)
{
    // Выделяем память под массив, отслеживающий посещенные вершины
    // We allocate memory for an array that tracks visited vertices
    bool *visited = new bool[N];

    // Инициализируем массив посещенных вершин значением false
    // Initialize the array of visited vertices with the value false
    for (int i = 0; i < N; ++i)
        visited[i] = false;

    // Проходим по всем вершинам графа
    // We go through all the vertices of the graph
    for (int i = 0; i < N; ++i)
        // Если текущая вершина еще не посещалась
        // If the current vertex has not yet been visited
        if (!visited[i])
            // Запускаем поиск в глубину (DFS) из текущей вершины
            // Если найден цикл, возвращаем true
            // Run depth first search (DFS) from the current vertex
            // If a cycle is found, return true
            if (dfs(matrix, visited, i, -1, N))
            {
                // Освобождаем память, выделенную под массив посещенных вершин
                // Freeing the memory allocated for the array of visited
                // vertices
                delete[] visited;
                return true;
            }

    // Освобождаем память, выделенную под массив посещенных вершин
    // Freeing the memory allocated for the array of visited vertices
    delete[] visited;

    // Если цикл не найден, возвращаем false
    // If the loop is not found, return false
    return false;
}

bool Graph::dfs(int **matrix, bool *visited, int current, int parent, int N)
{
    // Помечаем текущую вершину как посещенную
    // Mark the current vertex as visited
    visited[current] = true;

    // Проходим по всем вершинам графа
    // We go through all the vertices of the graph
    for (int i = 0; i < N; ++i)
        // Если вершина i смежна с текущей
        // If vertex i is adjacent to the current one
        if (matrix[current][i] == 1)
        {
            // Если вершина i не посещена
            // If vertex i is not visited
            if (!visited[i])
            {
                // Рекурсивно запускаем поиск в глубину из вершины i
                // We recursively start depth-first search from vertex i
                if (dfs(matrix, visited, i, current, N))
                    return true;
            }
            // Если вершина i уже посещена и не является родительской вершиной
            // If vertex i has already been visited and is not its parent vertex
            else if (i != parent)
                // Возвращаем true, так как найден цикл
                // Return true because a cycle is found
                return true;
        }

    // Если цикл не найден, возвращаем false
    // If the loop is not found, return false
    return false;
}

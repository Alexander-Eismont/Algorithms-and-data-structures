#include <fstream>
#include <iostream>
#include <stack>
#include <vector>

std::vector<std::vector<int>> readGraphFromFile(const std::string &filename,
                                                int &N);
void topologicalSortDFS(const std::vector<std::vector<int>> &graph, int node,
                        std::vector<bool> &visited, std::stack<int> &stk);
void topologicalSort(const std::vector<std::vector<int>> &graph);

int main()
{
    std::string filename = "../input_1.txt";
    // std::string filename = "../input_2.txt";
    int N;

    std::vector<std::vector<int>> graph = readGraphFromFile(filename, N);

    topologicalSort(graph);

    system("pause");

    return 0;
}

// Функция для считывания матрицы смежности из файла
// Function to read the adjacency matrix from a file
std::vector<std::vector<int>> readGraphFromFile(const std::string &filename,
                                                int &N)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error opening file: " << filename << "\n";
        exit(-1);
    }

    file >> N;

    std::vector<std::vector<int>> graph(N, std::vector<int>(N));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            file >> graph[i][j];

    file.close();
    return graph;
}

// Функция для выполнения топологической сортировки с помощью DFS
// Function to perform topological sort using DFS
void topologicalSortDFS(const std::vector<std::vector<int>> &graph, int node,
                        std::vector<bool> &visited, std::stack<int> &stk)
{
    visited[node] = true;
    for (int i = 0; i < graph.size(); ++i)
        if (graph[node][i] && !visited[i])
            topologicalSortDFS(graph, i, visited, stk);

    stk.push(node);
}

// Основная функция для топологической сортировки
// Basic function for topological sorting
void topologicalSort(const std::vector<std::vector<int>> &graph)
{
    int N = graph.size();
    std::vector<bool> visited(N, false);
    std::stack<int> stk;

    // Вызываем DFS для каждой вершины, которая ещё не была посещена
    // Call DFS for each vertex that has not yet been visited
    for (int i = 0; i < N; ++i)
        if (!visited[i])
            topologicalSortDFS(graph, i, visited, stk);

    // Выводим результат
    // We display the result
    std::cout << "Topological order of vertices: ";
    while (!stk.empty())
    {
        // +1 для корректного вывода индексов (начиная с 1, а не с 0)
        // +1 for correct output of indexes (starting from 1, not 0)
        std::cout << stk.top() + 1 << " ";
        stk.pop();
    }
    std::cout << "\n";
}

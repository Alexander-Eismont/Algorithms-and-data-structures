#include "graph.h"
#include <fstream>
#include <iostream>

void printResult(bool hasCycle);

int main()
{
    // Открытие файла
    // Opening a file
    // std::string filename = "../input7.txt";
    std::string filename = "../input4.txt";

    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Could not open file " << filename;
        return -1;
    }

    // Чтение размера графа
    // Reading the graph size
    int N;
    file >> N;

    // Создание и заполнение матрицы смежности
    // Creating and filling an adjacency matrix
    Graph graph;

    int **matrix = graph.createGraph(N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            file >> matrix[i][j];

    // Закрытие файла
    // Closing a file
    file.close();

    // Вывод матрицы смежности на экран
    // Displaying the adjacency matrix on the screen
    graph.printGraph(matrix, N);

    // Проверка наличия циклов в графе и вывод результата
    // Checking for cycles in a graph and displaying the result
    printResult(graph.hasCycle(matrix, N));

    // Освобождение памяти, выделенной под матрицу смежности
    // Freeing memory allocated for the adjacency matrix
    graph.deleteGraph(matrix, N);

    system("pause");

    return 0;
}

void printResult(bool hasCycle)
{
    if (hasCycle)
        std::cout << "The graph has cycles\n";
    else
        std::cout << "There are no cycles in the graph\n";
}

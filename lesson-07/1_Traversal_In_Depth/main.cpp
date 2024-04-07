#include <fstream>
#include <iostream>

void dfs(int vertex, int **adjacencyMatrix, bool *visitedVertex, int N);

int main()
{
    // открытие файла и проверка успешное ли открытие
    // opening a file and checking whether the opening was successful
    std::ifstream file("../input.txt");
    if (!file.is_open())
    {
        std::cerr << "Unable to open file 'input.txt'";
        return -1;
    }

    // количество вершин графа
    // number of graph vertices
    int N;
    file >> N;

    // создание матрицы смежности в виде двумерного динамического массива
    // creating an adjacency matrix as a two-dimensional dynamic array
    int **adjacencyMatrix = new int *[N];
    for (int i = 0; i < N; i++)
    {
        adjacencyMatrix[i] = new int[N];
        for (int j = 0; j < N; j++)
        {
            file >> adjacencyMatrix[i][j];
        }
    }

    // закрытие файла
    // closing a file
    file.close();

    // создание массива для отслеживания посещенных вершин
    // creating an array to track visited vertices
    bool *visitedVertex = new bool[N];
    for (int i = 0; i < N; i++)
        visitedVertex[i] = false;

    // отсчет с первой вершины
    // counting from the first vertex
    const int firstVertex = 1;

    dfs(firstVertex, adjacencyMatrix, visitedVertex, N);

    // освобождение памяти
    // freeing memory
    for (int i = 0; i < N; i++)
        delete[] adjacencyMatrix[i];
    delete[] adjacencyMatrix;
    delete[] visitedVertex;

    std::cout << "\n";
    system("pause");
    return 0;
}

void dfs(int vertex, int **adjacencyMatrix, bool *visitedVertex, int N)
{
    // вывод текущей вершины
    // output of the current vertex
    std::cout << vertex << " ";

    // отметка вершины как посещенной
    // marking a vertex as visited
    visitedVertex[vertex - 1] = true;

    // перебор соседей текущей вершины
    // enumerate the neighbors of the current vertex
    for (int i = 0; i < N; i++)
        // если есть связь между вершинами и соседняя вершина не посещена
        // if there is a connection between vertices and the neighboring
        // vertex is not visited
        if (adjacencyMatrix[vertex - 1][i] == 1 && !visitedVertex[i])
            // рекурсивный вызов для соседней вершины
            // recursive call to neighboring vertex
            dfs(i + 1, adjacencyMatrix, visitedVertex, N);
}

#include <exception>
#include <fstream>
#include <iostream>
#include <queue>

// максимальный размер графа
// maximum graph size
const int MAX_N = 100;

int getStartVertex(int N);
void bfs(int graph[MAX_N][MAX_N], int N, int startIndex);

int main()
{
    // открытие файла
    // opening a file
    std::ifstream file("../input.txt");
    if (!file.is_open())
    {
        std::cerr << "Unable to open file input.txt\n";
        return -1;
    }

    // чтение количества вершин графа
    // reading the number of vertices in a graph
    int N;
    file >> N;

    // создание матрицы смежности графа
    // creating a graph adjacency matrix
    int graph[MAX_N][MAX_N];

    // чтение матрицы смежности из файла
    // reading adjacency matrix from file
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            file >> graph[i][j];

    // закрытие файла
    // closing a file
    file.close();

    std::cout << "There are " << N << " vertices int the graph. ";

    // запрос у пользователя индекса стартовой вершины
    // request from the user the index of the starting vertex
    int startVertex = getStartVertex(N);

    // обход графа в ширину
    // breadth first traversal of a graph
    bfs(graph, N, startVertex - 1);

    std::cout << "\n";

    system("pause");
    return 0;
}

int getStartVertex(int N)
{
    try
    {
        std::cout << "Enter the index of the starting vertex (1 to " << N
                  << ") : ";

        int vertex;
        std::cin >> vertex;

        if (vertex < 1 || vertex > N)
        {
            std::cin.clear();
            std::cin.ignore();
            throw std::invalid_argument("Invalid vertex index!");
        }

        return vertex;
    }
    catch (const std::exception &error)
    {
        std::cerr << error.what() << "\n";

        return getStartVertex(N);
    }
}

void bfs(int graph[MAX_N][MAX_N], int N, int startVertex)
{
    bool visitedVertices[MAX_N] = {false};

    // очередь для хранения вершин, которые нужно посетить
    // a queue to store the vertices to be visited
    std::queue<int> q;

    // помещаем стартовую вершину в очередь и помечаем её как посещённую
    // put the starting vertex in the queue and mark it as visited
    q.push(startVertex);
    visitedVertices[startVertex] = true;

    while (!q.empty())
    {
        // извлекаем вершину из очереди и выводим её индекс
        // remove a vertex from the queue and display its index
        int currentVertex = q.front();
        q.pop();
        std::cout << currentVertex + 1 << " ";

        // просматриваем соседние вершины текущей вершины
        // look through the neighboring vertices of the current vertex
        for (int i = 0; i < N; i++)
            // если есть связь и вершина не посещена, добавляем её в очередь
            // if there is a connection and the vertex has not been visited,
            // add it to the queue
            if (graph[currentVertex][i] == 1 && !visitedVertices[i])
            {
                q.push(i);
                visitedVertices[i] = true;
            }
    }
}

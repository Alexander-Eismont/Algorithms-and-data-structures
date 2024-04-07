#include <fstream>
#include <iostream>

int **createGraph(const int &N);
void deleteGraph(int **arr, const int &N);
void printGraph(int **graph, int N);
void dfs(int node, int **graph, bool *visited, int component, int *components,
         int N);

int main()
{
    std::string filename = "../resource/input7.txt";
    // std::string filename = "../resource/input8.txt";

    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Unable to open file " << filename << "\n";
        return -1;
    }

    int N;
    file >> N;

    int **graph = createGraph(N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            file >> graph[i][j];

    file.close();

    printGraph(graph, N);

    bool *visited = new bool[N];
    int *components = new int[N];
    int currentComponent = 0;

    for (int i = 0; i < N; i++)

        if (!visited[i])
        {
            currentComponent++;
            dfs(i, graph, visited, currentComponent, components, N);
        }

    std::cout << "\nBelonging of vertices to connected components: \n";
    for (int i = 0; i < N; ++i)
        std::cout << i + 1 << " - " << components[i] << "\n";

    std::cout << "\nNumber of connected components in the graph: "
              << currentComponent << "\n";

    deleteGraph(graph, N);
    delete[] visited;
    delete[] components;

    system("pause");
    return 0;
}

int **createGraph(const int &N)
{
    int **arr = new int *[N];

    for (int i = 0; i < N; i++)
        arr[i] = new int[N];

    return arr;
}

void deleteGraph(int **arr, const int &N)
{
    for (int i = 0; i < N; i++)
        delete[] arr[i];

    delete[] arr;
}

void printGraph(int **graph, int N)
{
    std::cout << "Matrix representation of the graph:\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
            std::cout << graph[i][j] << " ";

        std::cout << "\n";
    }
}

void dfs(int node, int **graph, bool *visited, int component, int *components,
         int N)
{
    visited[node] = true;
    components[node] = component;

    for (int i = 0; i < N; ++i)
    {
        if (graph[node][i] && !visited[i])
        {
            dfs(i, graph, visited, component, components, N);
        }
    }
}

#include <fstream>
#include <iostream>
#include <vector>

void printDirectedGraph(const std::vector<std::vector<int>> &adjacencyMatrix);

int main()
{
    std::ifstream inputFile("../input.txt");
    if (!inputFile)
    {
        std::cerr << "Could not open file input.txt\n";
        return 1;
    }

    int N;
    inputFile >> N;

    std::vector<std::vector<int>> adjacencyMatrix(N, std::vector<int>(N));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            inputFile >> adjacencyMatrix[i][j];

    inputFile.close();

    printDirectedGraph(adjacencyMatrix);

    system("pause");

    return 0;
}

void printDirectedGraph(const std::vector<std::vector<int>> &adjacencyMatrix)
{
    int N = adjacencyMatrix.size();

    std::cout << "Text view of the digraph:\n";

    for (int i = 0; i < N; ++i)
    {
        std::cout << i + 1 << ": ";
        bool hasOutgoingEdges = false;
        for (int j = 0; j < N; ++j)
        {
            if (adjacencyMatrix[i][j] == 1)
            {
                std::cout << j + 1 << " ";
                hasOutgoingEdges = true;
            }
        }
        if (!hasOutgoingEdges)
            std::cout << "no";

        std::cout << "\n";
    }
}

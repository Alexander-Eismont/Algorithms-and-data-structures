#pragma once

class Graph
{
public:
    Graph();

    int **createGraph(const int &N);
    void printGraph(int **graph, int N);
    void deleteGraph(int **arr, const int &N);
    bool hasCycle(int **graph, int N);
    bool dfs(int **graph, bool *visited, int current, int parent, int N);
};

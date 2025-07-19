#include <iostream>
#include <vector>
#include <limits>
#include <windows.h>

using namespace std;

const int INF = numeric_limits<int>::max();

void floydWarshall(vector<vector<int>>& graph, int n) {
    for (int k = 0; k < n; ++k) {            // промежуточная вершина
        for (int i = 0; i < n; ++i) {        // начальная вершина
            for (int j = 0; j < n; ++j) {    // конечная вершина
                if (graph[i][k] != INF && graph[k][j] != INF) {
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }
    }
}

int main() {
    SetConsoleOutputCP(65001);
    const int n = 4;
    // Матрица смежности: A = 0, B = 1, C = 2, D = 3
    vector<vector<int>> graph = {
        {0,   9,   7,   INF},  // A
        {9,   0,   6,   4},    // B
        {7,   6,   0,   8},    // C
        {INF, 4,   8,   0}     // D
    };

    floydWarshall(graph, n);

    int max_distance = -1;
    pair<int, int> max_pair;

    // Поиск пары с наибольшим кратчайшим расстоянием
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (graph[i][j] != INF && graph[i][j] > max_distance) {
                max_distance = graph[i][j];
                max_pair = {i, j};
            }
        }
    }

    // Преобразование индексов в буквы A, B, C, D
    char point1 = 'A' + max_pair.first;
    char point2 = 'A' + max_pair.second;

    cout << "Наиболее удаленные пункты: " << point1 << " и " << point2
         << " с расстоянием " << max_distance << "." << endl;

    return 0;
}


#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <climits>
#include <set>
#include <windows.h>
using namespace std;

// Определим граф в виде словаря смежности (unordered_map)
using Graph = unordered_map<string, unordered_map<string, int>>;

// Алгоритм Дейкстры
int dijkstra(Graph& graph, const string& start, const string& end) {
    // Инициализируем расстояния до всех узлов бесконечностью
    unordered_map<string, int> distances;
    for (const auto& node : graph) {
        distances[node.first] = INT_MAX;
    }

    // Расстояние до стартовой вершины = 0
    distances[start] = 0;

    // Очередь с приоритетом: пары (расстояние, вершина)
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<>> pq;
    pq.push({0, start});

    set<string> visited;

    while (!pq.empty()) {
        auto [current_distance, current_node] = pq.top();
        pq.pop();

        if (visited.count(current_node)) continue;
        visited.insert(current_node);

        // Обходим соседей
        for (const auto& [neighbor, weight] : graph[current_node]) {
            int new_dist = current_distance + weight;
            if (new_dist < distances[neighbor]) {
                distances[neighbor] = new_dist;
                pq.push({new_dist, neighbor});
            }
        }
    }

    return distances[end];
}

int main() {
    SetConsoleOutputCP(65001);
    // Граф дорог между пунктами
    Graph graph = {
        {"A", {{"B", 1}}},
        {"B", {{"A", 1}, {"C", 2}, {"D", 2}, {"E", 7}}},
        {"C", {{"B", 2}, {"E", 3}}},
        {"D", {{"B", 2}, {"E", 4}}},
        {"E", {{"B", 7}, {"C", 3}, {"D", 4}}}
    };

    // Выводим кратчайшее расстояние от A до E
    cout << "Кратчайшее расстояние от A до E: " << dijkstra(graph, "A", "E") << endl;

    return 0;
}



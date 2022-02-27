#include "iostream"
#include "queue"
#include "algorithm"

using namespace std;

int N, M, V;
bool **G;
bool *visited;

void init() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}

void clear_visited() {
    fill(visited, visited + N, 0);
}

void dfs(int vertex) {
    cout << vertex + 1 << ' ';
    visited[vertex] = true;
    for (int i = 0; i < N; i++)
        if (G[vertex][i] && !visited[i])
            dfs(i);
}

void bfs(int start) {
    queue<int> buffer;
    buffer.push(start);

    int vertex;
    while (!buffer.empty()) {
        vertex = buffer.front();
        buffer.pop();
        if (!visited[vertex]) {
            cout << vertex + 1 << ' ';
            visited[vertex] = true;
            for (int i = 0; i < N; i++)
                if (G[vertex][i] && !visited[i])
                    buffer.push(i);
        }
    }
}

int main() {
    int s, e;

    cin >> N >> M >> V;

    visited = new bool[N];
    G = new bool *[N];
    for (int i = 0; i < N; i++)
        G[i] = new bool[N];

    while (M--) {
        cin >> s >> e;
        G[s-1][e-1] = G[e-1][s-1] = true;
    }

    clear_visited();
    dfs(V - 1);
    cout << '\n';
    clear_visited();
    bfs(V - 1);

    return 0;
}

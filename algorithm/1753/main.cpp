#include "iostream"
#include "algorithm"
#include "queue"
#include "vector"

#define INF 200001

using namespace std;

int v, e, s;
vector<pair<int, int>> *edges;
int *d;

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void input() {
    cin >> v >> e >> s;
    s--;
    d = new int[v];
    edges = new vector<pair<int, int>>[v];

    fill(d, d + v, INF);

    d[s] = 0;

    int v1, v2, w;
    for (int i = 0; i < e; ++i) {
        cin >> v1 >> v2 >> w;
        v1--;
        v2--;
        edges[v1].push_back(make_pair(w, v2));
    }
}

void solve() {
    int visited = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> buffer;
    buffer.push({0, s});

    int cur, weight;
    while (!buffer.empty()) {
        cur = buffer.top().second;
        weight = buffer.top().first;
        buffer.pop();

        if (visited & 1 << cur)
            continue;

        visited |= 1 << cur;

        for (int i = 0; i < edges[cur].size(); ++i) {
            int temp_cost = weight + edges[cur][i].first;
            int next = edges[cur][i].second;
            if (visited & 1 << next)
                continue;
            if (temp_cost < d[next]) {
                d[next] = temp_cost;
                buffer.push(make_pair(temp_cost, next));
            }

        }
    }
}


int main() {

    async();

    input();

    solve();

    for (int i = 0; i < v; ++i) {
        if (d[i] >= INF)
            cout << "INF" << '\n';
        else
            cout << d[i] << '\n';
    }

    return 0;
}
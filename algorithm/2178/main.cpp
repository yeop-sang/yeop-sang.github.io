#include "iostream"
#include "queue"

using namespace std;

int N, M;
bool **map;
int **dis;
int res = -1;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void my_init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    queue<pair<int, int> > buffer;
    buffer.push(make_pair(0, 0));

    dis[0][0] = 1;

    int x, y;

    while (!buffer.empty()) {
        pair<int, int> vertex = buffer.front();
        buffer.pop();

        for (int i = 0; i < 4; i++) {
            x = vertex.first + dx[i];
            y = vertex.second + dy[i];

            if (x < 0 || y < 0 || x > N - 1 || y > M - 1)
                continue;

            if (dis[x][y] == -1 && map[x][y]) {
                dis[x][y] = dis[vertex.first][vertex.second] + 1;
                buffer.push(make_pair(x, y));
            }
        }
    }
}

int main() {
    my_init();

    char c;
    int x, y;

    cin >> N >> M;

    map = new bool *[N];
    dis = new int *[N];

    for (x = 0; x < N; x++) {
        map[x] = new bool[M];
        dis[x] = new int[M];
        for (y = 0; y < M; y++) {
            cin >> c;
            if (c == '1')
                map[x][y] = true;
            else
                map[x][y] = false;
            dis[x][y] = -1;
        }
    }

    solve();

    cout << dis[N-1][M-1];
    return 0;
}

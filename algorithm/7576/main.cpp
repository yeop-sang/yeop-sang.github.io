#include "iostream"
#include "queue"

using namespace std;

typedef struct {
    int y;
    int x;
    int cnt;
} current_point;

int n, m;
int **map, **visited;
queue<current_point> one_point;

pair<int, int> d[4] = {
        make_pair(1, 0),
        make_pair(0, 1),
        make_pair(-1, 0),
        make_pair(0, -1)
};

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

bool is_end() {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (map[i][j] == 0)
                return false;
        }
    }
    return true;
}

void print_map() {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << map[i][j] << ' ';
        }
        cout << '\n';
    }
}

bool range(int y, int x);

bool is_visited(int y, int x) {
    return visited[y][x];
}

void ferment(int y, int x, int cnt);

void input();

void solve();

int main() {

    async();

    input();

    solve();

    return 0;
}

void input() {
    cin >> n >> m;
    map = new int *[m];
    visited = new int *[m];
    for (int i = 0; i < m; ++i) {
        map[i] = new int[n];
        visited[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cin >> map[i][j];
            visited[i][j] = false;
            if (map[i][j] == 1)
                one_point.push({i, j, 0});
        }
    }
}

void solve() {
    int x, y, cnt;
    while (!one_point.empty()) {
        y = one_point.front().y;
        x = one_point.front().x;
        cnt = one_point.front().cnt;
        one_point.pop();

        if (!is_visited(y, x)) {
            visited[y][x] = true;
            ferment(y, x, cnt);
        }
    }

    if(is_end())
        cout << cnt;
    else
        cout << -1;
}

void ferment(const int y, const int x, int cnt) {
    int temp_y, temp_x;
    cnt++;
    for (int i = 0; i < 4; ++i) {
        temp_y = y + d[i].first;
        temp_x = x + d[i].second;
        if (range(temp_y, temp_x) && map[temp_y][temp_x] == 0) {
            map[temp_y][temp_x] = 1;
            one_point.push({temp_y, temp_x, cnt});
        }
    }
}

bool range(int y, int x) {
    return (y < m & x < n & y > -1 & x > -1);
}

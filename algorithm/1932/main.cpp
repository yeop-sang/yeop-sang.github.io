#include "iostream"
#include "climits"
#include "algorithm"

using namespace std;

int **map, **dist, n;

void async() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void set() {
    cin >> n;
    map = new int *[n];
    dist = new int *[n];
    for (int x = 0; x < n; x++) {
        map[x] = new int[n];
        dist[x] = new int[n];
        for (int y = 0; y < n; y++) {
            if (x < y)
                continue;
            cin >> map[x][y];
            dist[x][y] = INT_MIN;
        }
    }
}

void solve() {
    dist[0][0] = map[0][0];
    int temp_value, temp_index;
    for(int level = 1; level < n; level++)
        for(int index = 0; index < level + 1; index++) {
            for(int i = 0; i < 2; i++) {
                temp_index = index + i;
                if(temp_index > level + 1)
                    break;

                temp_value = dist[level - 1][index] + map[level][temp_index];

                if(temp_value > dist[level][temp_index])
                    dist[level][temp_index] = temp_value;
            }
        }
}

int main() {
    async();

    set();

    solve();

    sort(dist[n - 1], dist[n - 1] + n);

    cout << dist[n- 1][n - 1];

    return 0;
}

#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int N;
bool **complex;
int complex_number;
int cnt;
vector<int> complex_counter;

void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void dfs(int x, int y) {
    if (x < 0 || y < 0 || x > N - 1 || y > N - 1 || !complex[x][y])
        return;
    cnt++;
    complex[x][y] = false;
    dfs(x - 1, y);
    dfs(x, y - 1);
    dfs(x + 1, y);
    dfs(x, y + 1);
}

int main() {
    cin >> N;

    complex = new bool *[N];
    for (int i = 0; i < N; i++)
        complex[i] = new bool[N];

    char c;
    int x, y;

    for (x = 0; x < N; x++)
        for (y = 0; y < N; y++) {
            cin >> c;
            if (c == '1')
                complex[x][y] = true;
        }

    for (x = 0; x < N; x++)
        for (y = 0; y < N; y++)
            if (complex[x][y]) {
                cnt = 0;
                dfs(x, y);
                complex_counter.push_back(cnt);
                complex_number++;
            }

    sort(complex_counter.begin(), complex_counter.end());

    cout << complex_number << '\n';

    for (int i = 0; i < complex_number; i++)
        cout << complex_counter[i] << '\n';

    return 0;
}

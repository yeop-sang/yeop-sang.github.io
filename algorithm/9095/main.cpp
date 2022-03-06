#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

int T, *n;
int *mem;

void async() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void input() {
    cin >> T;
    n = new int[T];
    for(int i = 0; i < T; i++)
        cin >> n[i];
}

void solve() {
    for (int i = 0; i < T; i++) {
        const int to = n[i];

        if (to < 4) {
            int res = -1;
            switch (to) {
                case 1:
                    res = 1;
                    break;
                case 2:
                    res = 2;
                    break;
                case 3:
                    res = 4;
                    break;
            }
            cout << res << '\n';
            continue;
        }

        mem = new int[to + 1];
        mem[1] = 1;
        mem[2] = 2;
        mem[3] = 4;

        for (int j = 4; j < to + 1; j++)
            mem[j] = mem[j - 1] + mem[j - 2] + mem[j - 3];

        cout << mem[to] << '\n';
        free(mem);
    }
}

int main() {
    async();

    input();

    solve();

    return 0;
}

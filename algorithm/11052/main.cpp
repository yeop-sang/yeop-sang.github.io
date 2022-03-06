#include "iostream"
#include "algorithm"

using namespace std;

int n, *p, *mem;

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void input();

void solve();

int main() {
//    async();

    input();

    solve();

    cout << mem[n];

	return 0;
}

void input() {
    cin >> n;
    p = new int[n + 1];
    mem = new int[n + 1];
    for (int i = 1; i < n + 1; ++i) {
        cin >> p[i];
        mem[i] = 0;
    }
}

void solve() {
    mem[0] = p[0] = 0;
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < i + 1; ++j) {
            mem[i] = max(mem[i], mem[i - j] + p[j]);
        }
    }
}

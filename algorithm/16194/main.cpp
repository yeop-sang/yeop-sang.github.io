#include "iostream"
#include "climits"
#include "algorithm"

using namespace std;

int n, cost[1000 + 1], mem[1000 + 1];

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void input();

void solve();

int main() {
    async();

    input();

    solve();

	return 0;
}

void input() {
    cin >> n;
    for (int i = 1; i < n + 1; ++i) {
        cin >> cost[i];
        mem[i] = INT_MAX;
    }
    cost[0] = mem[0] = 0;
}

void solve() {
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < i + 1; ++j) {
            mem[i] = min(mem[i], mem[i - j] + cost[j]);
        }
    }
    cout << mem[n];
}

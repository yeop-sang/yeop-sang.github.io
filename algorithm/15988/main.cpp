#include "iostream"
#include "algorithm"

using namespace std;

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

long long mem[1000001];
int n, *test_case;

void input() {
    cin >> n;
    test_case = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> test_case[i];
    }
    mem[1] = 1;
    mem[2] = 2;
    mem[3] = 4;
}

void solve() {
    long long mod = 1000000009;
    int i, m = *max_element(test_case, test_case + n);
    for (i = 4; i <= m; ++i) {
        mem[i] = (mem[i - 1] + mem[i - 2] + mem[i - 3]) % mod;
    }

    for (i = 0; i < n; ++i) {
        cout << mem[test_case[i]]  << '\n';
    }

}

int main() {
    async();
    input();
    solve();
    return 0;
}

#include "iostream"

int n;
int *mem;

using namespace std;

void async() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void input() {
    cin >> n;
    mem = new int[n + 1];
}

void solve() {
    mem[1] = 1;
    mem[2] = 2;
    for (int i = 3; i < n + 1; i++)
        mem[i] = (mem[i - 1] + mem[i - 2]) % 10007;
}

int main() {
    async();
    input();
    solve();
    cout << mem[n];
    return 0;
}

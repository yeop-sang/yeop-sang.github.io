#include "iostream"
#include "algorithm"

#define MY_INF 10000000

using namespace std;

int *d;

int n;

void async() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
}

void input() {
    cin >> n;
    d = new int[n + 1];
    fill(d, d + n + 1, MY_INF);
}

int main() {
    async();

    input();

    d[1] = 0;

    for (int i = 2; i <= n; i++)
        d[i] = min(
                {
                        d[i - 1] + 1,
                        i % 3 == 0 ? d[i / 3] + 1 : d[i],
                        i % 2 == 0 ? d[i / 2] + 1 : d[i]
                }
        );

    cout << d[n];

    return 0;
}

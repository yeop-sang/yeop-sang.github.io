#include "iostream"
#include "numeric"

#define MAX 100000 + 1

using namespace std;

int  t, n[MAX];
long long mem[MAX][4];

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
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n[i];
    }
}

void solve() {
    mem[1][0] = mem[1][1] = mem[2][0] = mem[2][2] = mem[3][1] = mem[3][2] = mem[3][3] = 1;
    mem[3][0] = 3;

    for (int i = 0; i < t; ++i) {
        int num = n[i];
        int result = mem[num][0];

        if (result == 0) {
            for (int j = 4; j < num + 1; ++j) {
                long long *mem_arr = mem[j];

                if (mem_arr[0] != 0)
                    continue;

                for (int k = 1; k < 4; ++k) {

                    for (int l = 1; l < 4; ++l) {
                        if (k == l)
                            continue;
                        mem_arr[k] = (mem_arr[k] + mem[j - k][l]) % 1000000009;
                    }
                }

                mem_arr[0] = accumulate(mem_arr + 1, mem_arr + 4, 0) % 1000000009;
            }
            result = mem[num][0];
        }

        cout << result << '\n';
    }
}

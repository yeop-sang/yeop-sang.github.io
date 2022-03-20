#include "iostream"

using namespace std;

int N, M;
char map[11][11];

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void roll_dice(int direction) {
    // direction 0: top, 1: down, 2: left, 3: right

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
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> map[i][j];
        }
    }
}

void solve() {

}

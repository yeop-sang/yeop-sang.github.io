#include "iostream"
#include "queue"

using namespace std;

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int n, k;
int history[200000 + 1];

void input() {
    cin >> n >> k;
}

bool outOfBound(int point) {
    return point > 200000 || point < 1;
}

void print_history() {
    int temp = k;
    vector<int> temp_history;
    while (temp != n) {
        temp_history.push_back(temp);
        temp = history[temp];
    }

    temp_history.push_back(n);

    for (int i = temp_history.size() - 1; i >= 0; --i) {
        cout << temp_history[i] << ' ';
    }
}

void solve() {
    queue<pair<int, int> > buffer;
    buffer.push(make_pair(n, 0));

    while (!buffer.empty()) {
        int point = buffer.front().first, cnt = buffer.front().second;
        buffer.pop();
        cnt++;

        for (int i = 0; i < 3; ++i) {
            int temp_point = point;
            switch (i) {
                case 0:
                    temp_point += 1;
                    break;
                case 1:
                    temp_point -= 1;
                    break;
                case 2:
                    temp_point *= 2;
                    break;
            }

            if(outOfBound(temp_point) || history[temp_point] != 0)
                continue;

            history[temp_point] = point;

            if(temp_point == k) {
                cout << cnt << '\n';
                print_history();
                return;
            }

            buffer.push(make_pair(temp_point, cnt));
        }
    }
}

int main() {
    async();

    input();

    solve();

    return 0;
}

#include "iostream"
#include "queue"
#include "algorithm"
#define limitN 100000

using namespace std;

queue<pair<int, int> > buffer;

int N, K;
bool visited[limitN + 1];

void async() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool not_valid(int n) {
    return (n < 0 || n > limitN || visited[n]);
}

void solve() {
    buffer.push(make_pair(0, N));
    visited[N] = true;
    int temp_cnt, temp_point;
    pair<int, int> vertex;

    while (!buffer.empty()) {
        vertex = buffer.front();
        buffer.pop();
        for (int i = 0; i < 3; i++) {
            temp_point = vertex.second;
            temp_cnt = vertex.first;
            if(temp_point == K) {
                cout << temp_cnt;
                return;
            }
            switch (i) {
                case 0:
                    temp_point *= 2;
                    break;
                case 1:
                    temp_point += 1;
                    break;
                case 2:
                    temp_point -= 1;
                    break;
            }
            if(not_valid(temp_point))
                continue;
            visited[temp_point] = true;
            buffer.push(make_pair(++temp_cnt, temp_point));
        }
    }
}

int main() {
    async();

    cin >> N >> K;

    solve();

    return 0;
}

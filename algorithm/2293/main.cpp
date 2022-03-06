#include "iostream"
#include "queue"
#include "algorithm"
#include "tuple"

using namespace std;

int n, k;
int *cost;
int result;
int limit;
bool **visited;

void async() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void input() {
    cin >> n >> k;
    cost = new int[n];
    int i, temp_cost;
    for(i = 0; i < n; i++)
        cin >> cost[i];
    sort(cost, cost + n);
    while(temp_cost < k)
        temp_cost = cost[0] * ++limit;
    visited = new bool*[n];
    for(i = 0; i < n; i++)
        visited[i] = new bool[limit];
}

void solve() {
    queue<tuple<int, int, int*> > buffer;
    int* temp_status, *status, i, cnt, value, temp_value;
    status = new int[n];
    for(i = 0; i < n; i++)
        status[i] = 0;

    buffer.push(make_tuple(0, 0, status));

    while(!buffer.empty()) {
        tie(cnt, value, status) = buffer.front();
        buffer.pop();

        cnt++;
        if(cnt > limit)
            continue;

        for(i = 0; i < n; i++) {
            temp_status = new int[n];
            copy(status, status + n, temp_status);
            temp_status[i]++;

            temp_value = value + cost[i];


            if(temp_value == k) {
                result++;
                continue;
            }
            buffer.push(make_tuple(cnt, temp_value, temp_status));
        }
        free(status);
    }
}

int main() {
    async();

    input();

    solve();

    cout << result;
	return 0;
}

#include "iostream"
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pl;

int n, m;
vector<pl> *edge;
ll *d;

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

void input() {
    cin >> n >> m;
    edge = new vector<pl>[n + 1];
    d = new ll[n+1];
    fill(d, d + n + 1, 0);
    int a,b,c;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b >> c;
        edge[a].push_back(make_pair(c,b));
        edge[b].push_back(make_pair(c,a));
    }
}

void solve() {
    priority_queue<pl, vector<pl>, less<pl> > buffer;
    buffer.push()
}


int main() {

    async();

    input();

    solve();

	return 0;
}
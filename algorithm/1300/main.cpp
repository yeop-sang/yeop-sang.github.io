#include "iostream"
#include "algorithm"

using namespace std;

void async() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

long long n, k;

void input() {
    cin >> n >> k;
    k = min({n * n, (long long)1000000000, k});
}

long long cnt(long long mid) {
    int cnt = 0;
    for (long long i = 1; i < n + 1; ++i) {
        if(i > mid)
            break;
        cnt += min(mid/i, n);
    }

    return cnt;
}

void solve() {
    long long s = 1, e = n * n, mid, c, ans;

    while(s <= e) {
        mid = (s + e) / 2;
        c = cnt(mid);

        if (c < k) s = mid + 1;
        else e = mid - 1, ans = mid;
    }

    cout << ans << '\n';
}

int main() {

    async();

    input();

    solve();

    return 0;

}
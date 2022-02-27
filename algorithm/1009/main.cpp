#include "iostream"
#include "vector"
#include "cmath"

using namespace std;

int N, a, b;
int arr[10] = {0};

void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    init();
    cin >> N;
    while (N--) {
        cin >> a >> b;
        if (b > 10) {
            vector<int> history;
            int temp = a;
            while (temp != 1) {
                history.push_back(temp);
                temp = (temp * a)% 10;
            }
            temp = b % history.size() + 1;
            if (temp > history.size()) {
                temp
            }
            cout << history.at(temp) << '\n';
        } else {
            cout << int(pow(a,b)) % 10 << '\n';
        }
    }
    return 0;
}

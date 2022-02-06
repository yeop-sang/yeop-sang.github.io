#include "iostream"

using namespace std;

int solve(int num) {
    int left, right;
    if (num < 10) {
        left = 0;
    } else {
        left = num / 10;
    }

    right = num % 10;

    return right * 10 + (left + right) % 10;
}

int main() {
    int num, temp;
    cin >> num;

    int cnt = 0;
    temp = num;

    do {
        temp = solve(temp);
        cnt++;
    } while (temp != num);

    cout << cnt;

    return 0;
}
#include "iostream"

using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int num, temp, flag = 0;
        cin >> num;
        temp = num;
        while (temp / 10 > 0) {
            cout << temp << endl;
            if (num == 11) {
                flag = 1;
                break;
            }
            temp = temp / 10 - temp % 10;
        }
        if (flag) cout << "The number " << num << " is divisible by 11.\n";
        else cout << "The number " << num << " is not divisible by 11.\n";
    }
    return 0;
}

#include "iostream" 

using namespace std;

int L, P;

int main() {
    cin >> L >> P;

    int loop = 5,
    people = L * P,
    num;

    while(loop--) {
        cin >> num;
        cout << num - people << " ";
    }

	return 0;
}

#include "iostream" 

using namespace std;

int main() {
    int A, I;
    cin >> A >> I;
    if (A > 1 && I > 1)
        cout << A * (I - 1)  + 1 << endl;
    else
        cout << A * I << endl;
	return 0;
}

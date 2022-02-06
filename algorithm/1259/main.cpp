#include "iostream"
#include "string"
#include "list"

using namespace std;

int palindrome(string str) {
    int n = str.length();
    for(int i = 0; i < n; i++) {
        if (str[i] != str[n - i - 1])
            return false;
    }
    return true;
}

int main() {
    int num;

    list<int> input;

    cin >> num;
    while(num != 0) {
        input.push_back(num);
        cin >> num;
    }

    int n = input.size();

    for(int i = 0; i < n; i++) {
        num = input.front();
        input.pop_front();

        if(palindrome(to_string(num)))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
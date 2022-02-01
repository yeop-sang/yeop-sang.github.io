#include "iostream"
#include "string"

using namespace std;

int main() {
    int N;
    cin >> N;

    string temp;
    cin >> temp;

    string res = temp;

    for(int i = 1; i < N; i++) {
        cin >> temp;
        for(int j= 0; j < res.length(); j++)
            if(temp[j] != res[j])
                res[j] = '?';
    }

    cout << res << endl;

    return 0;
}
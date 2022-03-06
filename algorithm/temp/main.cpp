#include <iostream>
#include <vector>

using namespace std;

vector <char> boom, shield;

void async() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void input() {
    char c;
    string line;
    cin >> line;
    for(int i = 0; i < int(line.size()); i++) {
        c = line[i];
        switch(c) {
            case '(':
                boom.push_back(c);
                break;
            case ')':
                shield.push_back(c);
                break;
        }
    }
}

bool solve() {
    return boom.size() == shield.size();
}

int main() {

    async();

    input();


    if(solve())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
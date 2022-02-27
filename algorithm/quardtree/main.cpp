#include "iostream"
#include "string"
#include "vector"

using namespace std;

int C;
string input;
string result;
char decompressed[10000][10000];

void init() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void decompress(string::iterator &it, int y, int x, int size) {
    char head = *(it++);
    if(head != 'x') {
        for (int dy =0; dy < size; ++dy) {
            for(int dx = 0; dx < size; ++dx) {
                decompressed[y + dy][x + dx] = head;
            }
        }
    } else {
        int half = size / 2;
        decompress(it, y, x, half);

    }
}

int main() {
    init();
    cin >> C;

    while (C--) {
        cin >> input;

    }
}

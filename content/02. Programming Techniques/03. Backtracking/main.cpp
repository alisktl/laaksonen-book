#include <iostream>
#include <unordered_map>

using namespace std;

#define forn(i, a, b) for(int i = a; i < b; i++)

int N;
unordered_map<int, bool> col;
unordered_map<int, bool> diag1;
unordered_map<int, bool> diag2;
int permCount = 0;

void search(int y) {
    if (y == N) {
        ++permCount;
    } else {
        forn(x, 0, N) {
            if (col[x] || diag1[x + y] || diag2[x - y + N - 1]) continue;

            col[x] = diag1[x + y] = diag2[x - y + N - 1] = true;
            search(y + 1);
            col[x] = diag1[x + y] = diag2[x - y + N - 1] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> N;

    search(0);
    cout << permCount << "\n";
}
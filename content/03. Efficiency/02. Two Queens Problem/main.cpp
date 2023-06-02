#include <iostream>
#include <unordered_map>

using namespace std;

#define forn(i, a, b) for(int i = a; i < b; i++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;
    cin >> N;
    unordered_map<int, int> q;

    q[1] = q[2] = 0;
    forn(i, 3, N + 1) {
        q[i] = q[i - 1] + (2 * i - 1) * (i * i - 3 * (i - 1) - 1) - (i - 1) * (i - 2);
    }

    cout << q[N];
}

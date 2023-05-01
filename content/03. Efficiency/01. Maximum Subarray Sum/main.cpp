#include <iostream>

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

    int a[N];

    forn(i, 0, N) {
        cin >> a[i];
    }

    int sum = 0, best = 0;
    forn(i, 0, N) {
        sum = max(a[i], sum + a[i]);
        best = max(best, sum);
    }

    cout << best << endl;
}

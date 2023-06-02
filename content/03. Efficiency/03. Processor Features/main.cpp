#include <iostream>

using namespace std;

#define ll long long
#define forn(i, a, b) for(int i = a; i < b; i++)

void cache() {
    int n = 100;
    int x[n][n];
    int s;

    // Variant 1
    forn(i, 0, n) {
        forn(j, 0, n) {
            s += x[i][j];
        }
    }

    // Variant 2
    forn(i, 0, n) {
        forn(j, 0, n) {
            s += x[j][i];
        }
    }

    /**
     * Variant 1 is faster than Variant 2
     * */
}

void parallel() {
    int n = 8;
    ll M = 100000000L;

    // Variant 1
    ll f1 = 1;
    forn(i, 2, n + 1) {
        f1 = (f1 * i) % M;
    }

    // Variant 2
    ll f2 = 1;
    ll f3 = 1;
    for (int i = 1; i < n + 1; i += 2) {
        f2 = (f2 * i) % M;
        f3 = (f3 * (i + 1)) % M;
    }
    ll f4 = f2 * f3;

    /**
     * Variant 2 is faster than Variant 1
     * */
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cache();
    parallel();
}

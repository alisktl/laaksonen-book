#include <iostream>

using namespace std;

#define forn(i, a, b) for(int i = a; i < b; i++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int A, B, C;
    cin >> A >> B >> C;

    cout << "AND operaton: A & B: " << (A & B) << "\n";
    cout << "OR operaton: A | B: " << (A | B) << "\n";
    cout << "XOR operaton: A ^ B: " << (A ^ B) << "\n";
    cout << "NOT operaton: ~C: " << (~C) << "\n";
    cout << "Bit shifts: C << 2: " << (C << 2) << "\n";
    cout << "Bit shifts: C >> 1: " << (C >> 1) << "\n";

    cout << "\nBit masks:\n";
    cout << "Bit representation of C: \t";
    for (int k = 31; k >= 0; k--) {
        if (C & (1 << k)) cout << "1";
        else cout << "0";
    }

    cout << "\nSet 7-th bit of C to 1: \t";
    int D = C | (1 << 7);
    for (int k = 31; k >= 0; k--) {
        if (D & (1 << k)) cout << "1";
        else cout << "0";
    }

    cout << "\nSet 2-nd bit of C to 0: \t";
    D = C & ~(1 << 2);
    for (int k = 31; k >= 0; k--) {
        if (D & (1 << k)) cout << "1";
        else cout << "0";
    }

    cout << "\nInvert 1-st bit of C: \t\t";
    D = C ^ (1 << 1);
    for (int k = 31; k >= 0; k--) {
        if (D & (1 << k)) cout << "1";
        else cout << "0";
    }

    cout << "\nSet last 1 bit of C to 0: \t";
    D = C & (C - 1);
    for (int k = 31; k >= 0; k--) {
        if (D & (1 << k)) cout << "1";
        else cout << "0";
    }

    cout << "\nSet all 1 bits of C to 0 except last 1: \t";
    D = C & -C;
    for (int k = 31; k >= 0; k--) {
        if (D & (1 << k)) cout << "1";
        else cout << "0";
    }

    cout << "\nInvert all the bits of C after the last 1: \t";
    D = C | (C - 1);
    for (int k = 31; k >= 0; k--) {
        if (D & (1 << k)) cout << "1";
        else cout << "0";
    }

    cout << "\nCheck if C is power of 2: \t";
    if ((C & (C - 1)) == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    cout << "\n\nAdditional functions:\n";
    cout << "The number of 0s at the beginning of the bit C representation: \t" << __builtin_clz(C) << "\n";
    cout << "The number of 0s at the end of the bit C representation: \t" << __builtin_ctz(C) << "\n";
    cout << "The number of 1s in the bit C representation: \t" << __builtin_popcount(C) << "\n";
    cout << "The parity (even or odd) of the number of 1s in the C bit representation: \t" << __builtin_parity(C)
         << "\n";
}

#include <iostream>

using namespace std;

#define forn(i, a, b) for(int i = a; i < b; i++)

void representSetsInInts() {
    cout << "Represent Sets using Int:\n\n";

    int S = 0, Z = 0;
    S |= (1 << 1);
    S |= (1 << 3);
    S |= (1 << 4);
    S |= (1 << 8);

    Z |= (1 << 3);
    Z |= (1 << 6);
    Z |= (1 << 8);
    Z |= (1 << 9);

    cout << "Set S contains: ";
    forn(i, 0, 32) {
        if(S & (1 << i)) cout << i << " ";
    }

    cout << "\nSet Z contains: ";
    forn(i, 0, 32) {
        if(Z & (1 << i)) cout << i << " ";
    }

    cout << "\n\nSet operations:\n";

    cout << "S∪Z (Union) contains: ";
    int SUZ = S | Z;
    forn(i, 0, 32) {
        if(SUZ & (1 << i)) cout << i << " ";
    }

    cout << "\nS∩Z (Intersection) contains: ";
    int SNZ = S & Z;
    forn(i, 0, 32) {
        if(SNZ & (1 << i)) cout << i << " ";
    }

    cout << "\n¬S (Complement) contains: ";
    int NON_S = ~S;
    forn(i, 0, 32) {
        if(NON_S & (1 << i)) cout << i << " ";
    }

    cout << "\nS\\Z (Difference) contains: ";
    int S_diff_Z = S & ~Z;
    forn(i, 0, 32) {
        if(S_diff_Z & (1 << i)) cout << i << " ";
    }
}

void representSetsInBitsets() {
    cout << "Represent Sets using Bitsets:\n\n";

    bitset<10> S, Z;
    S[1] = 1;
    S[3] = 1;
    S[4] = 1;
    S[8] = 1;

    Z[3] = 1;
    Z[6] = 1;
    Z[8] = 1;
    Z[9] = 1;

    cout << "Set S contains: ";
    forn(i, 0, S.size()) {
        if(S[i] == 1) cout << i << " ";
    }

    cout << "\nSet Z contains: ";
    forn(i, 0, Z.size()) {
        if(Z[i] == 1) cout << i << " ";
    }

    cout << "\nNumber of elements in S: " << S.count() << "\n";
    cout << "\nNumber of elements in Z: " << Z.count() << "\n";

    cout << "\nS∪Z (Union) contains: ";
    bitset<10> SUZ = S | Z;
    forn(i, 0, S.size()) {
        if(SUZ[i] == 1) cout << i << " ";
    }

    cout << "\nS∩Z (Intersection) contains: ";
    bitset<10> SNZ = S & Z;
    forn(i, 0, S.size()) {
        if(SNZ[i] == 1) cout << i << " ";
    }

    cout << "\nS^Z (XOR) contains: ";
    bitset<10> XOR = S ^ Z;
    forn(i, 0, S.size()) {
        if(XOR[i] == 1) cout << i << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("output.txt", "w", stdout);

    representSetsInInts();
    cout << "\n\n##############\n\n";
    representSetsInBitsets();
}

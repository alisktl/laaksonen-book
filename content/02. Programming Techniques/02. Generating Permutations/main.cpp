#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#define forn(i, a, b) for(int i = a; i < b; i++)

void printPermutation(vector<int>& permutation) {
    forn(i, 0, permutation.size()) {
        cout << permutation[i] << " ";
    }
    cout << "\n";
}

void search(vector<int>& numbers, vector<int>& permutation, unordered_map<int, bool>& chosen) {
    if(permutation.size() == numbers.size()) {
        printPermutation(permutation);
    } else {
        forn(i, 0, numbers.size()) {
            if(chosen[numbers[i]]) continue;

            chosen[numbers[i]] = true;
            permutation.push_back(numbers[i]);
            search(numbers, permutation, chosen);
            chosen[numbers[i]] = false;
            permutation.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;
    cin >> N;

    vector<int> numbers(N);
    forn(i, 0, N) {
        cin >> numbers[i];
    }

    vector<int> permutation(0);
    unordered_map<int, bool> chosen;

    search(numbers, permutation, chosen);
}
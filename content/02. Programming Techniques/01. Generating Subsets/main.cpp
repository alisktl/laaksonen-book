#include <iostream>
#include <vector>

using namespace std;

#define forn(i, a, b) for(int i = a; i < b; i++)

void printSubset(vector<int>& subset) {
    forn(i, 0, subset.size()) {
        cout << subset[i] << " ";
    }
    cout << "\n";
}

void search(vector<int>& numbers, vector<int>& subset, int k) {
    if(k == numbers.size()) {
        printSubset(subset);
    } else {
        subset.push_back(numbers[k]);
        search(numbers, subset, k+1);
        subset.pop_back();
        search(numbers, subset, k+1);
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

    vector<int> subset(0);

    search(numbers, subset, 0);
}
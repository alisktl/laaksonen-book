#include <iostream>
#include <vector>

using namespace std;

#define forn(i, a, b) for (int i = a; i < b; i++)

void countingSort(vector<int> &arr) {
    int max = 0;
    forn (i, 0, arr.size()) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    vector<int> count(max + 1, 0);

    forn (i, 0, arr.size()) {
        count[arr[i]]++;
    }

    int k = 0;
    forn (i, 0, count.size()) {
        forn (j, 0, count[i]) {
            arr[k++] = i;
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

    vector<int> arr(N);

    forn (i, 0, N) {
        cin >> arr[i];
    }

    countingSort(arr);

    forn (i, 0, N) {
        cout << arr[i] << " ";
    }
}

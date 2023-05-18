#include <iostream>
#include <vector>

using namespace std;

#define forn(i, a, b) for (int i = a; i < b; i++)

void bubbleSort(vector<int> &arr) {

    size_t N = arr.size();

    forn (i, 0, N) {
        forn (j, 0, N-1) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
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

    bubbleSort(arr);

    forn (i, 0, N) {
        cout << arr[i] << " ";
    }
}


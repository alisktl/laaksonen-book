#include <iostream>
#include <vector>

using namespace std;

#define forn(i, a, b) for (int i = a; i < b; i++)

// find first element that greater or equal to elem
int findFirstElementGreaterOrEqual(vector<int> &arr, int elem) {
    int n = int(arr.size());
    int k = -1;
    for (int a = n / 2; a > 0; a /= 2) {
        while (k + a < n && arr[k + a] < elem) k += a;
    }

    return k + 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N, elem;
    cin >> N;

    vector<int> arr(N);
    forn(i, 0, N) {
        cin >> arr[i];
    }
    cin >> elem;

    sort(arr.begin(), arr.end());
    int index = findFirstElementGreaterOrEqual(arr, elem);

    if (index < N) {
        cout << arr[index];
    } else {
        cout << elem << " is greater than all elements";
    }
}

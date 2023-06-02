#include <iostream>
#include <vector>

using namespace std;

#define forn(i, a, b) for (int i = a; i < b; i++)

bool binarySearch(vector<int> &arr, int elem) {
    int n = int(arr.size());
    int k = 0;
    for(int a = n/2; a > 0; a/=2) {
        while(k+a < n && arr[k+a] <= elem) k+=a;
    }

    if(arr[k] == elem) return true;

    return false;
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

    cout << binarySearch(arr, elem);
}

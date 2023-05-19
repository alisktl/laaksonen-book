#include <iostream>
#include <vector>

using namespace std;

#define forn(i, a, b) for (int i = a; i < b; i++)

void merge(vector<int> &arr, int l, int m, int r) {
    vector<int> arr_1(m-l+1);
    vector<int> arr_2(r-m);

    int k = 0;
    forn (i, l, m+1) {
        arr_1[k++] = arr[i];
    }

    k = 0;
    forn (i, m+1, r+1) {
        arr_2[k++] = arr[i];
    }

    int i = 0, j = 0;
    k = l;
    while (i < m-l+1 || j < r-m) {
        if (i == m-l+1) {
            arr[k++] = arr_2[j++];
        } else if (j == r-m) {
            arr[k++] = arr_1[i++];
        } else {
            if (arr_1[i] < arr_2[j]) {
                arr[k++] = arr_1[i++];
            } else {
                arr[k++] = arr_2[j++];
            }
        }
    }
}

void mergeSort(vector<int> &arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void mergeSort(vector<int> &arr) {
    mergeSort(arr, 0, arr.size()-1);
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

    mergeSort(arr);

    forn (i, 0, N) {
        cout << arr[i] << " ";
    }
}

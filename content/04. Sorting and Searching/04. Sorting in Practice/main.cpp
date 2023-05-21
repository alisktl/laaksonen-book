#include <iostream>
#include <vector>

using namespace std;

#define forn(i, a, b) for (int i = a; i < b; i++)

struct point {
    int x, y;

    point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    bool operator<(const point &p) {
        if(x == p.x) return y < p.y;
        return x < p.x;
    }
};

bool compare(point a, point b){
    if(a < b)
        return 1;
    else 
        return 0;
}

void sortingVector() {
    vector<int> arr = {4,2,5,3,5,8,3};
    
    // sort in increasing order
    sort(arr.begin(), arr.end());
    cout << "Sort vector in increasing order: ";
    forn (i, 0, arr.size()) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    // sort in decreasing order
    sort(arr.rbegin(), arr.rend());
    cout << "Sort vector in decreasing order: ";
    forn (i, 0, arr.size()) {
        cout << arr[i] << " ";
    }
}

void sortingArray() {
    int n = 7; // array size
    int arr[] = {4,2,5,3,5,8,3};

    sort(arr, arr + n);
    cout << "Sort array in increasing order: ";
    forn (i, 0, n) {
        cout << arr[i] << " ";
    }
}

void sortingString() {
    string s = "monkey";

    sort(s.begin(), s.end());
    cout << "Sort string in increasing order: ";
    cout << s;
}

void sortingPairs() {
    vector<pair<int, int>> v;
    v.push_back({1,5});
    v.push_back({2,3});
    v.push_back({1,2});
    sort(v.begin(), v.end());

    cout << "Sort vector of pairs in increasing order: ";
    forn (i, 0, v.size()) {
        cout << "{" << v[i].first << ", " << v[i].second << "} ";
    }
}

void sortingTuples() {
    vector<tuple<int, int, int>> v;
    v.push_back({2,1,4});
    v.push_back({1,5,3});
    v.push_back({2,1,3});
    sort(v.begin(), v.end());

    cout << "Sort vector of tuples in increasing order: ";
    forn (i, 0, v.size()) {
        cout << "{" << get<0>(v[i]) << ", " << get<1>(v[i]) << ", " << get<2>(v[i]) << "} ";
    }
}

void sortingStruct() {
    vector<point> v;
    v.push_back(point(1, 5));
    v.push_back(point(2, 3));
    v.push_back(point(1, 2));

    sort(v.begin(), v.end(), compare);

    cout << "Sort vector of points in increasing order: ";
    forn (i, 0, v.size()) {
        cout << "{" << v[i].x << ", " << v[i].y << "} ";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // Sorting vector
    sortingVector();

    cout << "\n\n";

    // Sorting array
    sortingArray();

    cout << "\n\n";

    // Sorting string
    sortingString();

    cout << "\n\n";

    // Sorting pairs
    sortingPairs();

    cout << "\n\n";

    // Sorting tuples
    sortingTuples();

    cout << "\n\n";

    // Sorting structs
    sortingStruct();
}

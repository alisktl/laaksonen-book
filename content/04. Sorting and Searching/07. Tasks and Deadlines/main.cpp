#include <iostream>
#include <vector>

using namespace std;

#define forn(i, a, b) for (int i = a; i < b; i++)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N;
    cin >> N;

    vector<pair<int, int>> tasks(N);

    int length, deadline;
    forn(i, 0, N) {
        cin >> length >> deadline;
        tasks[i] = {length, deadline};
    }

    sort(tasks.begin(), tasks.end());

    int x = 0, points = 0;
    forn(i, 0, N) {
        length = tasks[i].first;
        deadline = tasks[i].second;

        x += length;

        points += (deadline - x);
    }

    cout << points;
}

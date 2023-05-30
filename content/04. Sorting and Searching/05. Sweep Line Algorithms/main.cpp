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

    vector<int> enter(N);
    vector<int> exit(N);

    string inp;
    int hours, minutes;
    int k = 0;
    forn(i, 0, N * 2) {
        cin >> inp;

        if ((i & 1) == 0) {
            hours = stoi(inp.substr(0, 2));
            minutes = stoi(inp.substr(3, 2));

            enter[k] = hours * 60 + minutes;
        } else {
            hours = stoi(inp.substr(0, 2));
            minutes = stoi(inp.substr(3, 2));

            exit[k++] = hours * 60 + minutes;
        }
    }

    sort(enter.begin(), enter.end());
    sort(exit.begin(), exit.end());

    int count = 0, count_max = 0;
    int i = 0, j = 0;
    while (i != N && j != N) {
        if (enter[i] <= exit[j]) {
            i++;
            count++;
        } else {
            j++;
            count--;
        }

        if (count > count_max) {
            count_max = count;
        }
    }

    cout << count_max;
}

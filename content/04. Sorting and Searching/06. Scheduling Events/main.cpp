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

    vector<pair<int, int>> exit(N);

    string inp;
    int hours, minutes;
    int k = 0;
    forn(i, 0, N * 2) {
        cin >> inp;

        if ((i & 1) == 0) {
            hours = stoi(inp.substr(0, 2));
            minutes = stoi(inp.substr(3, 2));

            exit[k].second = hours * 60 + minutes;
        } else {
            hours = stoi(inp.substr(0, 2));
            minutes = stoi(inp.substr(3, 2));

            exit[k++].first = hours * 60 + minutes;
        }
    }

    sort(exit.begin(), exit.end());

    int count = 0;
    int i = 0;
    int exit_time = 0;

    if (N > 0) {
        exit_time = exit[i].first;
        i++;
        count++;
    }

    int j;
    while (i < N - 1) {
        j = i + 1;
        bool found = false;
        while (j < N) {
            if (exit_time <= exit[j].second) {
                i = j;
                exit_time = exit[i].first;
                count++;
                found = true;
                break;
            } else {
                j++;
            }
        }

        if (!found) {
            break;
        }
    }

    cout << count;
}

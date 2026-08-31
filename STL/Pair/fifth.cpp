//Print the pair with the largest first element
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    pair<int, int> maximum = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i].first > maximum.first) {
            maximum = v[i];
        }
    }

    cout << maximum.first << " "
         << maximum.second;

    return 0;
}
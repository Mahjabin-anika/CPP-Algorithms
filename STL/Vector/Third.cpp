//Sort vector in descending order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
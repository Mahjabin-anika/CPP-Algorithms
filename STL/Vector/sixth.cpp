//Count how many times 5 appears
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

    int result = count(v.begin(), v.end(), 5);

    cout << result;

    return 0;
}
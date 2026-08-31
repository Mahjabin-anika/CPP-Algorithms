//print common elements.
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;

    cin >> n;

    set<int> s1;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }

    cin >> m;

    set<int> s2;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }

    for (int x : s1) {
        if (s2.find(x) != s2.end()) {
            cout << x << " ";
        }
    }

    return 0;
}
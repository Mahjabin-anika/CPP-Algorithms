//Print YES if element exist otherwise NO.
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int search;
    cin >> search;

    if (s.find(search) != s.end()) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
//Print FOUND or NOT FOUND
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int key, value;
        cin >> key >> value;

        mp[key] = value;
    }

    int searchKey;
    cin >> searchKey;

    if (mp.find(searchKey) != mp.end()) {
        cout << "FOUND";
    }
    else {
        cout << "NOT FOUND";
    }

    return 0;
}
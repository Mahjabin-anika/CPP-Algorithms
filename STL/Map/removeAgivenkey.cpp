//Remove a given key
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

    int removeKey;
    cin >> removeKey;

    mp.erase(removeKey);

    for (auto it : mp) {
        cout << it.first << " "
             << it.second << endl;
    }

    return 0;
}
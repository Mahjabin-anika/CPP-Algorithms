//Print the key with the highest value
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

    int maxValue = -1;
    int maxKey;

    for (auto it : mp) {

        if (it.second > maxValue) {
            maxValue = it.second;
            maxKey = it.first;
        }
    }

    cout << maxKey;

    return 0;
}
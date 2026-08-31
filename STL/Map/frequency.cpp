//Count character frequency in a string
#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> mp;

    for (char c : s) {
        mp[c]++;
    }

    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
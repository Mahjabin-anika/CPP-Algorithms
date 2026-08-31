//Input two numbers and print them as a pair
#include <iostream>
#include <utility>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    pair<int, int> p;

    p.first = a;
    p.second = b;

    cout << p.first << " " << p.second;

    return 0;
}
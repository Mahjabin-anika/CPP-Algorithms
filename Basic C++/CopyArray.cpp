#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n], newArr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << newArr[i] << " ";
    }

    return 0;
}
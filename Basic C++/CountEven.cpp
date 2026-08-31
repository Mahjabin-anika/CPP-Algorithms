#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    cout << "Even count = " << count;

    return 0;
}
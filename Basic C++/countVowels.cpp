#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count = 0;

    for (int i = 0; i < str.length(); i++) {

        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {

            count++;
        }
    }

    cout << "Vowel count = " << count;

    return 0;
}
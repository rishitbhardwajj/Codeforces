#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int method1(string str) {
    int cnt1 = 0; // Uppercase count
    int cnt2 = 0; // Lowercase count

    int x = str.length();

    for (int i = 0; i < x; i++) {
        if (isupper(str[i])) {
            cnt1++;
        } else {
            cnt2++;
        }
    }

    if (cnt1 > cnt2) {
        for (int i = 0; i < x; i++) {
            str[i] = toupper(str[i]);
        }
    } else {
        for (int i = 0; i < x; i++) {
            str[i] = tolower(str[i]);
        }
    }

    cout << str << endl;
    return 0;
}

int main() {
    string str;
    cin >> str;

    method1(str);

    return 0;
}
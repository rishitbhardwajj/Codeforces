#include <bits/stdc++.h>
using namespace std;

void method1(int t, string s) {
    for (int i = 0; i < t; i++) {
        char ch;
        cin >> ch;

        if (s.find(ch) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    string s = "codeforces";

    method1(t, s);

    return 0;
}
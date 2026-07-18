#include <bits/stdc++.h>
using namespace std;

void method1(string str) {
    set<char> st;

    for (char ch : str) {
        st.insert(ch);
    }

    if (st.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}

int main() {
    string s;
    cin >> s;

    method1(s);

    return 0;
}
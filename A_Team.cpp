#include <bits/stdc++.h>
using namespace std;

int method1(int n) {
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2)
            cnt++;
    }

    return cnt;
}

int main() {
    int n;
    cin >> n;

    cout << method1(n);

    return 0;
}
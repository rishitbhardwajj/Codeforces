#include <bits/stdc++.h>
using namespace std;

void method1(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
}

int main() {
    int x;
    cin >> x;

    int arr[x];

    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    method1(arr, x);

    return 0;
}
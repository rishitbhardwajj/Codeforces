#include <bits/stdc++.h>
using namespace std;

void method1(int kg) {
    if (kg % 2 == 0 && kg > 2)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    int weight;
    cin >> weight;

    method1(weight);

    return 0;
}
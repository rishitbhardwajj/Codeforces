#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int nextPrime = n + 1;

    while (true)
    {
        if (isPrime(nextPrime))
        {
            if (nextPrime == m)
                cout << "YES";
            else
                cout << "NO";
            break;
        }
        nextPrime++;
    }

    return 0;
}
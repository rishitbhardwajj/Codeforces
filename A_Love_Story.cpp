#include<bits/stdc++.h>
using namespace std;

void method1(int n, string str)
{
    for(int k = 0; k < n; k++)
    {
        string s;
        cin >> s;

        int cnt = 0;

        for(int i = 0; i < str.size(); i++)
        {
            if(s[i] != str[i])
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    string str = "codeforces";

    method1(n, str);

    return 0;
}
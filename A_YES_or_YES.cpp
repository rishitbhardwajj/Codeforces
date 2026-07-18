#include<bits/stdc++.h>
using namespace std;

void method1(int n){
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        bool first = false, second = false, third = false;

        if(s[0] == 'Y' || s[0] == 'y'){
            first = true;
        }

        if(s[1] == 'E' || s[1] == 'e'){
            second = true;
        }

        if(s[2] == 'S' || s[2] == 's'){
            third = true;
        }

        if(first && second && third){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;

    method1(n);

    return 0;
}
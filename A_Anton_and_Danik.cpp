#include<bits/stdc++.h>
using namespace std;

void method1(int n){
    string s;
    cin >> s;

    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }

    if(cnt1 > cnt2){
        cout << "Anton";
    }
    else if(cnt2 > cnt1){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
}

int main(){
    int n;
    cin >> n;

    method1(n);

    return 0;
}
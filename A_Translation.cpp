#include<bits/stdc++.h>
using namespace std;
void method1(string s1, string s2){
   reverse(s2.begin(), s2.end());
    if(s1 == s2){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
int main(){
    string a,b;
    cin >> a;
    cin >> b;
     method1(a,b);
    return 0;
}
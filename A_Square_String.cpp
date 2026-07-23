#include<bits/stdc++.h>
using namespace std;
void method1(int n){
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        if(str.size()%2==0){
         string s1 = str.substr(0, str.size() / 2);
        string s2 = str.substr(str.size() / 2);
        if(s1==s2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        }
        else{
            cout << "NO"<<endl;
        }
    }
}
int main(){
    int n;
    cin>> n;
    method1(n);
    return 0;
}
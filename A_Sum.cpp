#include<bits/stdc++.h>
using namespace std;
void method1(int n){
    for(int i = 0; i<n; i++){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a+b==c||b+c==a||a+c==b){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
}
int main(){
    int n;
    cin >> n;
    method1(n);
    return 0;
}
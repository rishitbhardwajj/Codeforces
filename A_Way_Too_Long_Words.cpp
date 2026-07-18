#include<bits/stdc++.h>
using namespace std;
void method1(int n, string str){
    if(str.length() > 10){
        cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
    }
    else{
        cout<<str<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string str;
        cin>>str;
        method1(n, str);
    }
    return 0;
}
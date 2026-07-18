#include<bits/stdc++.h>
using namespace std;
int method1(int x){
    if(x>0){
        x = x-9;
    }
    return x;
}
int main(){
    int n;
    cin >> n;
    int result = method1(n);
    cout << result;
    return 0;
}
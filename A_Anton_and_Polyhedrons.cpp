#include<bits/stdc++.h>
using namespace std;
int method1(int n){
    string s;
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin >> s;
        if(s=="Icosahedron"){
            sum+=20;
        }
        else if(s=="Cube"){
            sum+=6;
        }
        else if(s=="Tetrahedron"){
            sum+=4;
        }
        else if(s=="Dodecahedron"){
            sum+=12;
        }
        else{
            sum+=8;
        }
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    int result = method1(n);
    cout << result;
    return 0;
}
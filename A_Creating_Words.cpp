#include<bits/stdc++.h>
using namespace std;
void method1(int n){
    for(int i = 0; i<n; i++){
        string r, s;
        cin>> r;
        cin >> s;
        swap(r[0],s[0]);
        cout << r << " " << s << endl;
    }
}
int main(){
    int n;
    cin >> n;
  method1(n);
  return 0;
}
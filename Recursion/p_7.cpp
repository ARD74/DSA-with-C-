#include<bits/stdc++.h>
using namespace std;
int mult(int m, int n){
   if(n == 0){
    return 0;
   }
   if(n == 1){
    return m;
   }
   int small_output = mult(m, n- 1);
   return m + small_output;
}
int main(){
    int m;
    cin >> m;
    int n;
    cin >> n;
    cout << mult(m, n);
}

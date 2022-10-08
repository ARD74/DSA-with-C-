#include<bits/stdc++.h>
using namespace std;
int sumArray(int *pa, int n){
    int smalloutput, output;
 if(n == 0){
    return 0;
 }
 else{
    smalloutput = sumArray(pa, n - 1);
    output = smalloutput + pa[n - 1] ;
 }
 return output;
}
int main(){
int n;
cin >> n;
int *pa = new int[n];
for(int i = 0; i < n; i++){
    cin >> pa[i];
}
cout << sumArray(pa, n);
delete [] pa;
}

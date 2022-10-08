#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int *p, int size){
    bool small_output;
if(size == 0 || size == 1){
    return true;
}
if(p[0] > p[1]){
    return false;
}
else{
    small_output = is_sorted(p + 1, size - 1);
}
return small_output;
}
int main(){
int n;
cin >> n;
int *pa = new int[n];
for(int i = 0; i < n; i++){
    cin >> pa[i];
}
cout << is_sorted(pa, n);
delete [] pa;
}

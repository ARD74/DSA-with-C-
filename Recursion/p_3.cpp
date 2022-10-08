#include <bits/stdc++.h>
using namespace std;
int digit(int n){
if(n/10 == 0){
    return 1;
}
int smalloutput = digit(n/10);
return 1 + smalloutput;
}
int main(){
int n;
cin >> n;
cout << digit(n);
}

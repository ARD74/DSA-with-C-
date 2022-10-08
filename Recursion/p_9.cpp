#include<bits/stdc++.h>
using namespace std;
double geometric_sum(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
   double small_output = geometric_sum(n - 1);
   double output = (1/(pow (2, n)) + small_output);
   return output;
}
int main(){
    int n;
    cin >> n;
    cout << geometric_sum(n);
}

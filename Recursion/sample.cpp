#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a % b == 0){
        return b;
    }
    int c = a % b;
    gcd(b, c);
}
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int k = gcd(n,m);
    cout << k;
}

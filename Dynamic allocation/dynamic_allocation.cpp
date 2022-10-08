#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p = new int;
    *p = 10;
    cout << *p << endl;

    int n;
    cin >> n;
    int *pa2 = new int[n];
    for(int i = 0; i < n; i++){
       cin >> pa2[i];
    }
     for(int i = 0; i < n; i++){
       cout << pa2[i];
    }
}

#include<bits/stdc++.h>
using namespace std;
int find(int *p, int size, int x){
    if(size < 0){
        return - 1;
    }
     if(p[size] == x){
        return (size + 1);
    }
    find(p, size - 1, x);
}
int main(){
    int n;
    cin >> n;
int *p = new int[n];
for(int i = 0; i < n; i++){
    cin >> p[i];
}
int x;
cin >> x;
int k = find(p, n, x);
if(k != -1){
    cout << "Present " << k;
}
else{
    cout << "Not present";
}
delete[] p;
}

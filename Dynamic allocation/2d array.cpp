#include<bits/stdc++.h>
using namespace std;
int main(){
int r, c;
cin >> r >> c;
int **p = new int*[r];
for(int i = 0; i < r; i++){
    p[i] = new int[c];
    for(int j = 0; j < c; j++){
        cin >> p[i][j];
    }
}
for(int a = 0; a < r; a++){
    for(int b = 0; b < c; b++){
        cout << p[a][b];
    }
}
for(int k = 0; k < r; k++){
    delete []p[k];
}
    delete []p;
}

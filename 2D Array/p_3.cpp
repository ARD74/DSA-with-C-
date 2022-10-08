#include<bits/stdc++.h>
using namespace std;
void input_arr(int b[10][10], int row, int column){
for(int i = 0; i < row; i++){
   for(int j = 0; j < column; j++){
     cin >> b[i][j];
   }
}
}
 void spiralprint_arr(int b[10][10], int row, int column){
     int z = 0, p = 0, o = column, y = column - 1, i = 1, u = row, x = row - 1, t = column - 2, r = 0, w = 0, s = row - 2, f = 0, count = 0;
     while(count < (row*column)){
  for(int a = p; a < o; a++){
     cout << b[z][a] << " ";
     count ++;
   }
   z++;
   p++;
   o--;
  for(int e = i; e < u; e++){
     cout << b[e][y] << " ";
     count ++;
   }
   y--;
   i++;
   u--;
  for(int c = t; c >= r; c--){
     cout << b[x][c] << " ";
     count ++;
   }
   x--;
   t--;
   r++;
  for(int d = s; d > f; d--){
     cout << b[d][w] << " ";
     count ++;
   }
   w++;
   s--;
   f++;
      }
}
int main(){
int b[10][10];
int row, column;
cin >> row >> column;
input_arr(b, row, column);
spiralprint_arr(b, row, column);
}

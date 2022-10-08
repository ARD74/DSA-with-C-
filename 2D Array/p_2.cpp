#include<bits/stdc++.h>
using namespace std;
void input_arr(int b[10][10], int row, int column){
for(int i = 0; i < row; i++){
   for(int j = 0; j < column; j++){
     cin >> b[i][j];
   }
}
}
 void waveprint_arr(int b[10][10], int row, int column){
    for(int i = 0; i < column; i++){
       if(i % 2 == 0){
        int j = 0;
        while(j < row){
            cout << b[j][i] << " ";
            j++;
        }
       }
       else{
        int j = row - 1;
        while(j >= 0){
            cout << b[j][i] << " ";
            j--;
        }
       }
    }
}
int main(){
int b[10][10];
int row, column;
cin >> row >> column;
input_arr(b, row, column);
waveprint_arr(b, row, column);
}

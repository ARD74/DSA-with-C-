#include<bits/stdc++.h>
using namespace std;
void input_arr(int b[][10], int row, int column){
for(int i = 0; i < row; i++){
   for(int j = 0; j < column; j++){
     cin >> b[i][j];
   }
}
}
void print_arr(int b[][10], int row, int column){
    for(int i = 0; i < row; i++){
            int j = row - i;
            while(j > 0){
       for(int j = 0; j < column; j++){
         cout << b[i][j] << " ";
       }
        j--;
       cout << endl;
    }
    }
    }
int main(){
int b[10][10];
int row, column;
cin >> row >> column;
input_arr(b, row, column);
print_arr(b, row, column);
}

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
       for(int j = 0; j < column; j++){
         cout << b[i][j] << " ";
       }
       cout << endl;
    }
    }
void max_arr(int b[][10], int row, int column){
    int max = 0, max_index = 0;
    string str;
    for(int i = 0; i < row; i++){
        int sum = 0;
       for(int j = 0; j < column; j++){
         sum = sum + b[i][j];
       }
       if(sum > max){
        str = "row";
        max = sum;
        max_index = i;
       }
    }
  for(int i = 0; i < column; i++){
        int sum = 0;
       for(int j = 0; j < row; j++){
         sum = sum + b[j][i];
       }
        if(sum > max){
        str = "column";
        max = sum;
        max_index = i;
       }
    }
    cout << str << " " << max_index << " " << max;
}
int main(){
int b[10][10];
int row, column;
cin >> row >> column;
input_arr(b, row, column);
print_arr(b, row, column);
max_arr(b, row, column);
}

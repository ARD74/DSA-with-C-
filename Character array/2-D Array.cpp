#include<iostream>
using namespace std;
void printArray(int arr[][5], int row, int column){
for(int i = 0; i < row; i++){
    for(int j = 0; j < column; j++){
        cout << arr[i][j] << " ";
    }
   cout << endl;
}}
int main(){
    int b[][5] = {{1,2}, {3,4}};
    printArray(b, 5, 5);
/*int arr[100][100];
int row, column;
cin >> row;
cin >> column;
for(int i = 0; i < row; i++){
    for(int j = 0; j < column; j++){
        cout << i << "," << j << " ";
        cin >> arr[i][j];
    }
}
//row wise
for(int i = 0; i < row; i++){
    for(int j = 0; j < column; j++){
        cout << arr[i][j] << " ";
    }
   cout << endl;
}
//column wise
for(int i = 0; i < column; i++){
    for(int j = 0; j < row; j++){
        cout << arr[j][i] << " ";
    }
    cout << endl;
}
printArray(arr, row, column);*/
}

#include<iostream>
using namespace std;
void zero_sort(int arr[], int n){
    /*for(int i = 0; i < n; i++){
        int current = arr[i];
    for(int j = i - 1; j >= 0; j++){
        if(arr[j] == 0){
            arr[j+1] = 0;
            arr[j] = current;
        }
    }
    }*/
    int j =0;
for(int i = 0; i < n; i++){
    if(arr[i] != 0){
        arr[j++] = arr[i];
    }
}
for(int k = j; k < n; k++){
        arr[k] = 0;
}
}
int main(){
int n;
cin >> n;
int arr[100];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
zero_sort(arr, n);
for(int k = 0; k < n; k++){
    cout << arr[k] << " ";
}
}

#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
for(int i = 1; i < n; i++){
    int current = arr[i];
 for(int j = i - 1; j >= 0; j--){
    if(current < arr[j]){
        arr[j+1] = arr[j];
        arr[j] = current;
    }
 }
}
}
int main(){
int n;
cin >> n;
int arr[100];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
insertion_sort(arr, n);
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
}

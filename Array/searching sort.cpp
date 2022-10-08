#include<iostream>
using namespace std;

void searching_sort(int arr[], int n){
for(int i = 0; i < n - 1; i++){
        //find min element in array
        int min = arr[i], min_index = i;
    for(int j = i + 1; j < n; j++){
        if(arr[j] < min){
            min = arr[j];
            min_index = j;
        }
    }
      //swap
         int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
}
}
int main(){
int n;
cin >> n;
int arr[100];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
searching_sort(arr, n);
for(int i = 0; i < n; i++){
    cout << arr[i];
}
}

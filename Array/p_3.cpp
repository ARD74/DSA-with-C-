#include<iostream>
#include<limits.h>
using namespace std;
int insertion_sort(int arr[], int n){
    int p = 0, k =0;
    if(n == 1){
        return INT_MIN;
    }
for(int i = 1; i < n; i++){
    int current = arr[i];
 for(int j = i - 1; j >= 0; j--){
    if(current > arr[j]){
        arr[j+1] = arr[j];
        arr[j] = current;
        p++;
    }
     if(current == arr[j]){
        k++;
     }
 }
}
if(p == 0 && k != 0){
    return INT_MIN;
}
return arr[1];
}
int main(){
int n;
cin >> n;
int arr[100];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
insertion_sort(arr, n);
    cout << insertion_sort(arr, n) ;
}

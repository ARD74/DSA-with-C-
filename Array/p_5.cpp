#include<iostream>
using namespace std;
void arrange_arr(int arr[], int n){
for(int i = 1; i < n; i++){
        int current = arr[i];
    for(int j = i - 1; j >= 0; j--){
        if(arr[i] < arr[j]){
            arr[i] = arr[j];
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
arrange_arr(arr, n);
for(int i = 0; i < n; i++){
cout << arr[i];
}
}

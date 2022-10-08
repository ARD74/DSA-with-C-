#include<iostream>
using namespace std;
void rotate_array(int arr[], int n, int d){
    int k = 0;
    for(int i = d - 1; i >= 0; i--){
        int push = arr[i];
        for(int j = i; j <= (n - d - k); j++){
            arr[j] = arr[j + 1];
            arr[j + 1] = push;
        }
        k++;
    }
}
int main(){
int n;
cin >> n;
int arr[100];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
int d;
cout << " Enter no.";
cin >> d;
rotate_array(arr, n, d);
for(int k = 0; k < n; k++){
    cout << arr[k] << " ";
}
}

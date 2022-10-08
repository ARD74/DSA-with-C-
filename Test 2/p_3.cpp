#include<bits/stdc++.h>
using namespace std;
void find_leader(int arr[], int n){
for(int i = 0; i < n; i++){
    if(arr[i] > arr[i+1]){
        cout << arr[i] << " ";
    }
}
cout << arr[n-1];
}
int main(){
int arr[100];
int n;
cin >> n;
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
find_leader(arr, n);
}

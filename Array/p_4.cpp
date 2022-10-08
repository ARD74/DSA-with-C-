#include<iostream>
using namespace std;

int rotate_num(int arr[],int n){
    int max_index = 0;
for(int i = 0; i < n; i++){
        int max = arr[i];
 for(int j = i + 1; j < n; j++)  {
    if(max > arr[j]){
        max = arr[j];
        max_index = j;
    }
 }
}
if(max_index == (n - 1)){
    return 0;
}
return max_index;
}
int main(){
int n;
cin >> n;
int arr[100];
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
rotate_num(arr, n);
cout << rotate_num(arr, n);
}

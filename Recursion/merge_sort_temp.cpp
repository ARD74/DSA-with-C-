#include<iostream>
using namespace std;
void mergeSort(int arr1[], int arr2[], int m, int n, int output[]){
    int i = 0, j = 0, k = 0;
while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            output[k] = arr1[i];
            i++;
            k++;
        }
        else{
            output[k] = arr2[j];
            j++;
            k++;
        }
}
        while(i < n){
            output[k] = arr1[i];
            i++;
            k++;
        }
        while(j < m){
            output[k] = arr2[j];
            j++;
            k++;
        }
}
void printArray(int arr[], int size){
for(int i = 0; i < size; i++){
    cout << arr[i];
}
}
int main(){
int arr1[100];
int n;
cin >> n;
for(int i = 0; i < n; i++){
    cin >> arr1[i];
}
int arr2[100];
int m;
cin >> m;
for(int j = 0; j < m; j++){
    cin >> arr2[j];
}
int output[100];
mergeSort(arr1, arr2, m, n, output);
printArray(output, m+n);
}

#include <bits/stdc++.h>
using namespace std;

//MERGE ALGO
void mergeArray(int arr[], int si, int mi, int ei){
    int i, j, k;
    int n1 = mi - si + 1;
    int n2 = ei - mi;
    int A[n1], B[n2];
      for(int i = 0; i < n1; i++){
        A[i] = arr[si + i];
    }
     for(int i = 0; i < n1; i++){
        B[i] = arr[mi + i + 1];
    }
    i = 0;
    j = 0;
    k = si;
    while(i < n1 && j < n2){
        if(A[i] <= B[j]){
            arr[k] = A[i];
            i++;
        }
        else{
            arr[k] = B[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = A[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = B[j];
        j++;
        k++;
    }

}

//RECURSION
void mergeSort(int arr[], int si, int ei){
    if(si < ei){
    int mi = si + (ei - si)/2;
    mergeSort(arr, si, mi);
    mergeSort(arr, mi+1, ei);
    mergeArray(arr, si, mi, ei);
    }
}

void printArray(int arr[], int n){
       for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printArray(arr, n);
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
}

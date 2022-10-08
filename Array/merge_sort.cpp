#include<iostream>
using namespace std;

void merge_sort(int a[], int b[], int c[], int n, int m){
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            c[k++] = a[i++];
        }
        else{
          c[k++] = b[j++];
        }
    }
    while(i < n){
        c[k++] = a[i++];
    }
    while(j < m){
        c[k++] = b[j++];
    }
}
int main(){
int n;
cin >> n;
int a[100];
for(int i = 0; i < n; i++){
    cin >> a[i];
}
int m;
cin >> m;
int b[100];
for(int j = 0; j < m; j++){
    cin >> b[j];
}
int c[100];
merge_sort(a, b, c, n, m);
 for(int q = 0; q < (n + m); q++){
    cout << c[q] << " ";
}
}

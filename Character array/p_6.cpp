#include<bits/stdc++.h>
using namespace std;
void check_permutation(char str1[], char str2[]){
    int n = strlen(str1);
    int k = 0;
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
        if(str1[i] == str2[j]){
            k++;
        }
       }
    }
    if(k == n){
        cout << "True";
    }
    else{
        cout << "False";
    }
}
int main(){
char str1[100];
cin.getline(str1, 100);
char str2[100];
cin.getline(str2, 100);
check_permutation(str1, str2);
}

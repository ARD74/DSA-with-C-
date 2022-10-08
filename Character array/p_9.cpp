#include<bits/stdc++.h>
using namespace std;
void max_alpha(char str[]){
    int n = strlen(str);
    char maxi;
    int count = 0;
for(int i = 0; i < n; i++){
        int k = 0;
    for(int j = i; j < n; j++){
        if(str[j] == str[i]){
            k++;
        }
    }
if(k > count){
    count = k;
    maxi = str[i];
}
}
cout << maxi;
}
int main(){
char str[100];
cin.getline(str, 100);
max_alpha(str);
}

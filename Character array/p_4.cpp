#include<bits/stdc++.h>
using namespace std;
char reverse_string(char str[]){
    int n = strlen(str);
for(int i = 0; i < n/2; i++){
   swap(str[n-i-1], str[i]);
}
}
char word_reverse(char str[]){
    reverse_string(str);
    int n = strlen(str);
    int j = n - 1;
   for(int i = n - 1; i >= -1; i--){
    if(str[i] == ' ' || i == -1){
            int k = i + 1;
        while(j > k){
            swap(str[j], str[k]);
            k++;
            j--;
        }
        j = i - 1;
    }
   }
}
int main(){
char str[100];
cin.getline(str, 100);
word_reverse(str);
cout << str;
}


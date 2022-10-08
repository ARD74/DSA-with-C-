#include<bits/stdc++.h>
using namespace std;
void reverse_word(char str[]){
int n = strlen(str);
int k = n - 1;
int j = 0;
for(int i = n - 1; i >= 0; i--){
    if(str[i] == ' ' || i == 0){
            if(i == 0){
                j = i;
            }
            else{
                    j = i + 1;
            }
        while(j < k){
            swap(str[j], str[k]);
            k--;
            j++;
        }
        k = i - 1;
    }
}
cout << str;
}
int main(){
char str[100];
cin.getline(str, 100);
reverse_word(str);
}

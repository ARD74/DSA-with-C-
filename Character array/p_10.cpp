#include<bits/stdc++.h>
using namespace std;
void compress(char str[]){
  cout << "hello world";
}
int main(){
char str[100];
cin.getline(str, 100);
compress(str);
  int n = strlen(str);
    int i = 0;
    int count;
    while(i < n){
            count = 0;
        for(int j = i; j < n; j++){
            if(str[j] == str[i]){
                count++;
            }
            else{
                break;
            }
        }
        i = i + count;
    }
   cout << str[i];
   if(count > 1){
    cout << count;
   }
}

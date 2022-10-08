#include<bits/stdc++.h>
using namespace std;
void removeChar(char str[], char x){
    if(str[0] == '\0'){
        return;
    }
      if(str[0] != x){
        removeChar(str + 1, x);
     }
     else{
        int i = 1;
      for(;str[i] != '\0';i++){
        str[i-1] = str[i];
      }
      str[i-1] = str[i];
      removeChar(str + 1, x);
     }
}
int main(){
   char str[100];
   cin >> str;
   char x;
   cin >> x;
   removeChar(str, x);
   cout << str;
}

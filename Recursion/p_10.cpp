#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(char str[], int n){
    if(n/2 >= 0){
    if(str[0] == str[n]){
        return 1;
    }
    else{
        return 0;
    }
     check_palindrome(str + 1,n - 1);
    }
}
int main(){
   char str[100];
   cin >> str;
    int size = strlen(str);
    check_palindrome(str, size);
   if(check_palindrome(str, size)){
       cout << "True";
   }
   else{
       cout << "False";
   }
}

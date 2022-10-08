#include<iostream>
#include<cstring>
using namespace std;
bool palindrome_str(char str[]){
int n = strlen(str);
int j = n - 1;
for(int i = 0; i <= n/2; i++){
    if(str[i] != str[j]){
        return 0;
        break;
    }
    j--;
}
return 1;
}
int main(){
char str[100];
cin >> str;
if(palindrome_str(str) == 0){
    cout << "False";
}
else{
    cout << "True";
}
}

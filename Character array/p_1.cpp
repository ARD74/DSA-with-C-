#include<iostream>
#include<cstring>
using namespace std;
int main(){
char str[100];
cin >> str;
char r;
cin >> r;
char x;
cin >> x;
int len = strlen(str);
for(int i = 0; i < len; i++){
 if(str[i] == r){
    str[i] = x;
 }
}
cout << str;
}

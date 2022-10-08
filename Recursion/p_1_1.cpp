#include<bits/stdc++.h>
using namespace std;
void remrep(char s[], char rem, char rep){
 if(s[0] == '\0'){
    return;
 }
 if(s[0] == rem){
    s[0] = rep;
    remrep(s + 1, rem, rep);
 }
 else{
    remrep(s + 1, rem, rep);
 }
}
int main(){
   char s[100];
   cin >> s;
   char rem;
   cin >> rem;
   char rep;
   cin >> rep;
   remrep(s, rem, rep);
   cout << s;
}

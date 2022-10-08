#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(char s[]){
if(s[0] == '\0'){
    return;
}
if(s[0] == s[1]){
        int i = 1;
    for(;s[i] != '\0';i++){
            s[i-1] = s[i];
    }
     s[i-1] = s[i];
     removeDuplicate(s);
}
    else{
    removeDuplicate(s+1);
    }
}
int main(){
    char s[1000];
    cin >> s;
    removeDuplicate(s);
    cout << s;
}

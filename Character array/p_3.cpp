#include<bits/stdc++.h>
using namespace std;
int main(){
char str[100];
cin.getline(str, 100);
int n = strlen(str);
for(int i = 0; i < n; i++){
    if(str[i] == ' '){
            for(int j = i; j < n; j++){
    str[j] = str[j+1];
    }
}
}
cout << str;
}

#include<bits/stdc++.h>
using namespace std;
void remove_char(char str[], char r){
    int n = strlen(str);
    int i=0,j=0;
    while(i<n)
    {

            if(str[i] !=r){
                str[j] = str[i];
                j++;

            }
            i++;
            if(i == n){
                str[j] = '\0';
            }

    }
}
int main(){
char str[100];
cin >> str;
char r;
cin >> r;
remove_char(str, r);
cout << str;
}

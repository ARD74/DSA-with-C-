#include<iostream>
using namespace std;
int main(){
char string[100];
cin >> string;
char r;
cin >> r;
for(int i = 0; i < strlen(string); i++){
    if(string[i] == r){
        string[i] = string[i+1];
    }
}
cout << string;
}

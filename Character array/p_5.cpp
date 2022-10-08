#include<bits/stdc++.h>
using namespace std;
void substring(char str[]){
int n = strlen(str);
for(int i = 0; i < n; i++){
  for(int j = i; j < n; j++){
        int k = i;
    while(k <= j){
        cout << str[k];
        k++;
    }
  cout << endl;
  }
}
}
int main(){
char str[100];
cin.getline(str, 100);
substring(str);
}

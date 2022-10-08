#include<bits/stdc++.h>
using namespace std;
void find_shortest(char str[]){
    int n = strlen(str);
    int j = 0, k = 0, min = INT_MAX, min_first = 0, min_last = 0;
    for(int i = 0; i < n; i++){
        int length = 0;
        if(str[i] == ' '){
                j = i;
                length = j - k;
        if(length < min){
            min = length;
            min_first = k;
            min_last = j;
        }
         if(i == n - 1){
            k = i;
        }
        else{
            k = j + 1;
        }
        }
    }
     for(int a = min_first; a <= min_last; a++){
        cout << str[a];
    }
}
int main(){
char str[100];
cin.getline(str, 100);
find_shortest(str);
}

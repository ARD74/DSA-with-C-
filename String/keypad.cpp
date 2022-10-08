#include<bits/stdc++.h>
using namespace std;
/*int keypad(int n, string output[], char key[]){
    if(n == 0){
        output[0] = " ";
        return 1;
    }
    int small_size = keypad(n/10, output);

}*/
void print(string s[], int size){
for(int i = 0; i < size; i++){
    cout << s[i];
}
}
int main(){
 int n;
 cin >> n;
 string output[100];
 int size = 26;
 string key[size];

 //keypad(n, output, key);
 print(key, size);
}

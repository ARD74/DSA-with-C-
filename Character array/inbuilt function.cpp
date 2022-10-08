#include<iostream>
#include<cstring>
using namespace std;
void printPrefix(char input[]){
    int len = strlen(input);
for(int i = 0; i < len; i++){
    for(int j = 0; j <= i; j++){
        cout << input[j] << " ";
    }
    cout << endl;
}
}
int main(){
char string[100];
cin >> string;
printPrefix(string);
//char input2[100];
//cin >> input2;
/*int len = strlen(input);
cout << "Length of string - " << len;
if(strcmp(input1, input2) == 0){
    cout << "Both the string are equal";
}
else{
   cout << "The string are not equal";
}
cout << input2 << endl;
strcpy(input2, input1);
strcpy(input2, "Hello");
cout << input2;
cout << input2 << endl;
strncpy(input2, input1, 3);
cout << input2;*/
/*char temp[100];
for(int i = 1; i <= strlen(input); i++){
    strncpy(temp, input, i);
    cout << temp << endl;}*/
}

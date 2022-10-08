#include<iostream>
using namespace std;
int length(char string[]){
    int i;
for(i = 0; string[i] != '\0'; i++){

}
    return i;
}
void reverse_string(char string[]){
    int len = length(string);
int  i = 0, j = (len - 1), temp = 0;
while(i < j){
   temp = string[i];
   string[i] = string[j];
   string[j] = temp;
   i++;
   j--;
}
}
int main(){
char string[100];
cin.getline(string, 100);
length(string);
cout << length(string) << endl;
reverse_string(string);
cout << string;
}

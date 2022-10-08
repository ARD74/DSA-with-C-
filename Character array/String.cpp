#include<iostream>
using namespace std;
int length(char input[]){
    int i;
for(i = 0; input[i] != '\0'; i++){
}
return i;
}
int main(){
char name[100];
//cin >> name;
cin.getline(name, 100, 'o');
/*name[4] = 'x';
name[3] = 'd';*/
cout << name << endl;
//cout << length(name);
}

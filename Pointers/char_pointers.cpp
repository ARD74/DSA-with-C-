#include<iostream>
using namespace std;
int main(){
int a[] = {1, 2, 3};
char c[] = "abc";
cout << a << endl;
cout << c << endl;
char* pc = &c[1];
cout << pc << endl;
char c1[] = "a";
char *pc1 = &c1[0];
cout << pc1 << endl;
}


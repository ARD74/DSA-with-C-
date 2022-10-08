#include<iostream>
using namespace std;
int main(){
    int i = 0;
    int *p = &i;
    cout << p << endl;
    p++;
    cout << p << endl;
    p--;
    cout << p << endl;
}

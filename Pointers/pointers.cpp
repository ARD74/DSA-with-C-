#include<iostream>
using namespace std;
int main(){
    int i = 10;
    cout << &i << endl;
    int *p = &i;
    cout << sizeof(p) << endl;
    cout << p << endl;
    cout << i << endl;
    cout << *p << endl;
    (*p)++;
    cout << i << endl;
    cout << *p << endl;

    /*float f = 10.2;
    float *pf = &f;
    cout << pf << endl;
    double d = 19.34;
    double *pd = &d;
    cout << pd << endl;*/
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    const int i = 10;
    //int *p = &i;
    const int *p = &i;
     //i++;
     //int &j = i;
     //j++;
     int k = 10;
     const int &m = k;
     k++;
     cout << m;

}

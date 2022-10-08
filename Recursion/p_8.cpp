#include<bits/stdc++.h>
using namespace std;
int zero(int n){
    static int count1;
    if(n > 0){
    if(n%10){
        count1++;
    }
        zero(n/10);
    }
    return count1;
}
/*int count_digit(int num)
{
static int count=0;
    if(num>0)
    {

        if(num%10==0)
        count++;

        count_digit(num/10);
    }
    return count;
}*/
int main(){
    int n;
    cin >> n;
    cout << zero(n);
}

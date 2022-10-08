#include<bits/stdc++.h>
using namespace std;
int subsequence(string s, string output[]){
    if(s.empty()){
        output[0] = " ";
        return 1;
    }
    int smallsize = subsequence(s.substr(1), output);
    for(int i = 0; i < smallsize; i++){
          output[i + smallsize] = output[i] + s[0];
    }
    return 2*smallsize;
}
int main(){
    string s;
    getline(cin, s);
    string output[1000];
    int n = subsequence(s, output);
    for(int i = 0; i < n; i++){
          cout << output[i] << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    string *sp = new string;
    *sp = "ARDEF";
    cout << sp << endl;
    cout << *sp << endl;
 string s = "abcdefghi";
 string s2 = "def";
 s[0] = 'a';
 cout << s << endl;
 cout << s[0] << endl;
    s2 += s;
 cout << s2 << endl;
 cout << s.size() << endl;
  cout << s.substr(1) << endl;
  cout << s.substr(1,3) << endl;
  cout << s.find("def") << endl;
}

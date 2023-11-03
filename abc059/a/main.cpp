#include<iostream>
#include <cctype>
#include <algorithm>
using namespace std; 
int main()
{
    string a,b,c;
    cin >> a >> b >> c;
    string s = "";
    s +=  a[0];
    s +=  b[0];
    s +=  c[0];
    transform(s.begin(), s.end(), s.begin(), ::toupper);
     cout << s << endl;	
}
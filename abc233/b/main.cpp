#include<iostream>
#include <algorithm>
using namespace std; 
int main()
{
    int a,b ;
    string s;
    cin >> a >> b >> s;
    reverse(s.begin()+a-1, s.end()+b-1);
    cout << s << endl;
}
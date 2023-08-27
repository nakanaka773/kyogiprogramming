#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    if((s[0] == 'A'||s[1] == 'A'||s[2] == 'A')&&!(s[0] == 'A'&&s[1] == 'A'&&s[2] == 'A')) cout << "Yes" << endl;
    else cout << "No" << endl;
}
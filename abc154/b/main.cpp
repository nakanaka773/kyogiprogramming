#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.length();i++){
        s[i] = 'x';
    }
    cout << s << endl;
}
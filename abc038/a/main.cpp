#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    if(s[s.length()-1] == 'T'){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

}
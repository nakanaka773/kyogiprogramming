#include<iostream>
using namespace std; 
int main()
{
    string s,t;
    cin >> s >> t;
    int len = s.length();
    if(s == t.substr(0,len)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
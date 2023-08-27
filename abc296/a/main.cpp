#include<iostream>
using namespace std; 
int main()
{
    int n;
    string s;
    cin >> n >> s;
    bool kougo = true;
    for(int i =0;i < n; i++){
        if(s[i]==s[i+1]) kougo =false;
    }
    if(kougo)cout << "Yes"<< endl;
    else cout << "No" << endl;
}
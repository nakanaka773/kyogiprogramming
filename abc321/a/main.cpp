#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    bool exit = true;
    for(int i = 0; i < s.length()-1;i++){
        if(int(s[i]-'0') <= int(s[i+1]-'0')){
            exit = false;
        }
    }
    if(exit){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
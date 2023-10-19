#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    bool exit = true;
    for(int i = 0; i < s.length();i++){
        if(i % 2 == 0){
            if(s[i] != 'R' && s[i] != 'U' &&s[i] != 'D' ){
                exit = false;
            }
        }else{
            if(s[i] != 'L' && s[i] != 'U' &&s[i] != 'D' ){
                exit = false;
            }

        }
    }
    if(exit){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
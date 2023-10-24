#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    bool exit = true;
    for(int i = 0; i< s.length();i++){
        for(int j =0; j < i; j++){
            if(s[i] == s[j]){
                exit = false;
            }
        }
    }
    if(exit){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;

    }

}
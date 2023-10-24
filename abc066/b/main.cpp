#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for(int i = len-1; i > 0; i--){
        if(i % 2==0 && s.substr(0,i/2)==s.substr(i/2,i/2)){
            cout << i << endl;
            break;
        }
    }
}
#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int count = s.length();
    int counter = -1;
    for(int i = 0; i < count ;i++){
        if(s[i] == 'a'){counter = i+1;}
    }
    cout << counter << endl;

}
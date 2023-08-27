#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int count = s.size()/2;
    for(int i = 0; i < count ;i++){
        swap(s[2*i],s[2*i+1]);
    }
    cout << s << endl;
    
}
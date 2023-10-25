#include<iostream>
using namespace std; 
int main()
{
    string s,t;
    cin >> s >> t;
    int n = s.length();
    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            count ++;
        }
    }
    cout << count << endl;

}
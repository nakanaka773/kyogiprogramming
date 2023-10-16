#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < 9; i ++){
        count += int(s[i] - '0');
    }
    cout << 45-count << endl;

}
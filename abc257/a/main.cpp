#include<iostream>
using namespace std; 
int main()
{
    int n , x;
    cin >> n >> x;
    int a = (x + 1) /n;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << s[a-1] << endl;
}
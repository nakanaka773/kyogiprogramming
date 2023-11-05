#include<iostream>
#include <regex>

using namespace std; 
int main()
{
    int n;
    string s;
    cin >> n >> s;
    string str1 = regex_replace(s, regex("na"), "nya");
    cout << str1 << endl;

}
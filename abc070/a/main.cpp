#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    string n;
    cin >> n;
    string x = n;
    reverse(n.begin(), n.end());

    if(x==n)cout << "Yes"<< endl;
    else cout << "No" << endl;


}
#include<iostream>
using namespace std; 
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << min(min(a+b,b+c),c+a) << endl;

}
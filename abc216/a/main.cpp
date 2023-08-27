#include<iostream>
using namespace std; 
int main()
{
    double a;
    cin >> a;

    int A = a * 10;
    int x = A / 10;
    int y = A % 10;

    if(0 <= y && y <= 2) cout << x << "-" << endl;
    else if(3 <= y && y <= 6) cout << x << endl;
    else cout << x << "+" << endl;



}
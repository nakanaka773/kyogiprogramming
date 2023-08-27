#include<iostream>
using namespace std; 
int main()
{
    double a,b;
    cin >> a >> b;
    cout << round(b/a*1000)%1000 << endl;

}
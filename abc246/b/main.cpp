#include<iostream>
using namespace std; 
#include <math.h>
#include <iomanip>
int main()
{
    int a,b;
    cin >> a >> b;
    double x = pow(a * a+ b* b,0.5);
    cout << fixed << setprecision(12);
    cout << a /x << " " <<b/ x<< endl;
}
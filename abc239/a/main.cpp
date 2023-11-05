#include<iostream>
using namespace std; 
#include <iomanip>
#include <math.h>
int main()
{
    double H;
    cin >> H;
    double x = pow(H * (H+12800000),0.50000);
    cout << fixed << setprecision(9);
    cout << x << endl;
}
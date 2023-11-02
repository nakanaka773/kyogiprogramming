#include<iostream>
#include <iomanip>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int cnt = (N+1)/2;
    cout << fixed << setprecision(10);
    cout << (double)1.00000000 * cnt / N<< endl;

}
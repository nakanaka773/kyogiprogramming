#include<iostream>
using namespace std; 
int main()
{
    long long a,b,k;
    cin >> a >> b >> k;
    int x = 0;
    while(b > a){
        a = a * k;
        x++;
    }
    cout << x << endl;
}
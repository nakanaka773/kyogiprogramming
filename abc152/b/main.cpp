#include<iostream>
#include <math.h>
using namespace std; 

int main()
{
    int a,b;
    cin >> a >> b;
    int A = 0;
    int B = 0;
    for(int i = 1; i <= b ; i++){
        A = A + a * pow(10,i);
    }

    for(int i = 1; i <= a ; i++){
        B = B + b * pow(10,i);
    }

    
    
    if(a<b) cout << A/10<< endl;
    else cout << B/10<< endl;
}
#include<iostream>
#include <math.h>
#include <iomanip> 
using namespace std; 
int main()
{
    
    int N;
    cin >> N;
    int x[N];
    int manf = 0;
    long yu = 0;
    int che = 0;
    for(int i = 0;i < N; i++){
        cin >> x[i];
        manf += abs(x[i]);
        yu += abs(x[i]) * abs(x[i]); 
        che = max(che,abs(x[i]));
    }
    cout << manf << endl;
    cout << fixed;
    cout <<  setprecision(15) << pow(yu,0.5) << endl;
    cout << che << endl;

}
#include<iostream>
using namespace std; 
int main()
{
    int k,a,b;
    cin >> k >> a >> b;
    if((b-a+1)>=k) cout << "OK" << endl;
    else cout << "NG"<< endl;
}
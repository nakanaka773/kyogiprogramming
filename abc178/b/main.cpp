#include<iostream>
using namespace std; 
int main()
{
    long long a,b,c,d;
    cin >> a >> b>> c >> d;
    long long mu = max(max(a*c,a*d),max(b*c,b*d));
    cout << mu << endl;

}
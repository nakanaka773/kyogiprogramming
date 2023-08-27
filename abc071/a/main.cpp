#include<iostream>
using namespace std; 
int main()
{
    int x,a,b;
    cin >> x >> a >> b;
    int A = abs(x-a);
    int B = abs(x-b);
    if(A<B) cout << "A" << endl;
    else cout << "B" << endl;


}
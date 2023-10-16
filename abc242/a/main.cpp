#include<iostream>
using namespace std; 
int main()
{
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    if(a > x){
        cout << 0.00000000000 << endl;
    }else if(b+c > x){
        
        cout << 1.000000000000 << endl;
    }else{
        cout << c/(b-a) << endl;
    }

}
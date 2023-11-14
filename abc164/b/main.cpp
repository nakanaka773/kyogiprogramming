#include<iostream>
using namespace std; 
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >>d;
    int x = (a+d-1) /d;
    int y = (c+b-1) /b;
    if(x > y){
        cout << "Yes" << endl;
    }else if(x == y){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
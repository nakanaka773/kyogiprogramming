#include<iostream>
using namespace std; 
int main()
{
    int x,y;
    cin >> x >> y;
    if((y-2*x) % 2 == 0 && (y-2*x) /2 <= x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
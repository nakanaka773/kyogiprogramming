#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    int A[3];
    int a,b,c;
    cin >> a >> b >> c;
    if(a <= b && b <= c){
        cout << "Yes" << endl;
    }else if(c <= b && b <= a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
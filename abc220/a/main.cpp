#include<iostream>
using namespace std; 
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if(A % C == 0){
        cout << A << endl;
    }else if(B % C == 0){
        cout << B << endl;
    }else if(A / C < B / C){
        cout << (A/C + 1 ) * C << endl;
    }else{
        cout << -1 << endl;
    }

}
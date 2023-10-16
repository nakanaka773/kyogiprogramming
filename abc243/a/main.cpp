#include<iostream>
using namespace std; 
int main()
{
    int V,A,B,C;
    cin >> V >> A >> B >> C;
    int amari = V % (A + B + C);
    if(amari < A){
        cout << "F" << endl;
    }else if(amari < A + B){
        cout << "M" << endl;
    }else{
        cout << "T" << endl;
    }

}
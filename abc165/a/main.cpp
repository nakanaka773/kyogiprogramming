#include<iostream>
using namespace std; 
int main()
{
    int K, A, B;
    cin >> K >> A >> B;
    bool exit = false;
    for(int i = A; i <= B; i++){
        if(i % K == 0) exit = true;
    }
    if(exit) cout << "OK" << endl;
    else cout << "NG" << endl;
}
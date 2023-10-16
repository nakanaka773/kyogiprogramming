#include<iostream>
using namespace std; 
int main()
{
    int A,B,K;
    cin >> A >> B >> K;
    int c= 0;
    int x = A;
    for(int i = 0; A >= B; i++){
        x = x * K; 
        c++;
        
    }
    cout << c << endl;
}
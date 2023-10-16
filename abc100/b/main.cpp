#include<iostream>
using namespace std; 
int main()
{
    int D,N;
    cin >> D >> N;
    int first = 1;
        for(int i = 0; i < D ;i++){
        first = first * 100;}
    
    cout << first * N << endl;

}
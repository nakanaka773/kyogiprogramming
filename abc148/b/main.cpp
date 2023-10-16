#include<iostream>
using namespace std; 
int main()
{
    int N;
    string S, T;
    cin >> N >> S >> T;
    string x;
    for(int i = 0 ; i < N; i++){
        x = x + S[i] + T [i];
    }
    cout << x << endl;
}
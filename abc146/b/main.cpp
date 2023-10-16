#include<iostream>
using namespace std; 
int main()
{
    int N;
    string S;
    cin >> N >> S;
    string X = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i < S.length(); i++ ){
        for(int j = 0; j < 26 ; i++){
            if(S[i] == X[j]) {S[i] = X[j + N]}
        }
    }
    cout << S << endl;
}
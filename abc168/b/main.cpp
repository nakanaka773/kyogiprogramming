#include<iostream>
using namespace std; 
int main()
{
    int K;
    string S;
    cin >> K >> S;
    if(K < S.length()){
        string x = "";
        for(int i = 0; i < K ; i++){
            x += S[i];
        }
        cout << x << "..." << endl;
    }else{
        cout << S << endl;
    }

}
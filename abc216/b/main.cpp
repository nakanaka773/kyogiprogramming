#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    string S[N],T[N];
    bool exit = false;
    for(int i = 0; i < N; i++){
        cin >> S[i] >> T[i];
        for(int j = 0; j < i; j++){
            if(S[i] == S[j] && T[i] == T[j]){
                exit = true;
            }
    }
    }
    if(exit){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
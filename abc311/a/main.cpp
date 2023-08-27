#include<iostream>
using namespace std; 
int main()
{
    bool a = false;
    bool b = false;
    bool c = false;
    int N;
    string S;
    cin >> N >> S;
    for(int i = 0; i < N ;i++){
        if(S[i]=='A') a = true;
        if(S[i]=='B') b = true;
        if(S[i]=='C') c = true;
        if(a&&b&&c){
            cout << i+1 << endl;
            break;
        }
    }

}
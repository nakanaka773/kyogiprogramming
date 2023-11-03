#include<iostream>
using namespace std; 
int main()
{
    int N;
    string S;
    cin >> N >> S;
    bool exit = false;
    for(int i = 0; i < S.length(); i++){
        if(S.substr(i,3) == "ABC"){
            exit = true;
            cout << i + 1 << endl;
            break;
        }
    }
    if(!exit){
        cout << -1 << endl;
    }

}
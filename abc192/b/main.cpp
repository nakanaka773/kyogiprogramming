#include<iostream>
using namespace std; 
int main()
{
    string S;
    cin >> S;
    bool exit = true;
    for(int i = 0; i < S.length(); i++){
        if(i % 2 == 0){
            if(isupper(S[i])){
                exit = false;
            }
        }else {
            if(islower(S[i])){
                exit = false;
            }

        }
    }
    if(exit){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
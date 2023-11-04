#include<iostream>
using namespace std; 
int main()
{
    int N;
    string s;
    cin >> N >>s;
    bool exit = false;
    for(int i = 0; i < N - 1;i++){
        if(s[i]=='a' && s[i+1] == 'b'){
            exit= true;
        }else if(s[i]=='b' && s[i+1] == 'a'){
            exit= true;
        }
    }
    if(exit){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
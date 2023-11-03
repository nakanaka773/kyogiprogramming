#include<iostream>
using namespace std; 
int main()
{

    string cont[4] = {"ABC" , "ARC" , "AGC" , "AHC"};
    bool exit[4] = {};
    string s;
    for(int i = 0 ; i < 3 ;i ++){
        cin >> s;
        for(int j = 0; j < 4 ; j++){
        if(cont[j] == s){
            exit[j] = true;
        }
        }
    }
     for(int i = 0 ; i < 4 ;i ++){
        if(!exit[i]){
            cout <<cont[i] << endl;
        }
    }

}
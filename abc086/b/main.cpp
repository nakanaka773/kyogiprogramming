#include<iostream>
using namespace std; 
int main()
{
    string a,b;
    cin >> a >> b;
    int c = stoi(a+b); 
    bool exit = false;
    for(int i = 0; i < 350; i++){
        if(c == i* i){
            exit = true;
            break;
        }
    }
    if(exit){
        cout <<"Yes"<< endl;
    }else{
        cout << "No" << endl;
    }
}
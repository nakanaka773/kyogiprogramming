#include<iostream>
using namespace std; 
int main()
{
    int N, M;
    cin >> N >> M;
    string s,t;
    cin >> s >> t;
    bool top = false;
    bool bottom = false;
    if(s == t.substr(0, N)){
        top = true;
    }
    if(s == t.substr(M-N,N)){
        bottom= true;
    }
    if(top && bottom){
        cout << 0 << endl;
    }else if(top && !bottom){
        cout << 1 << endl;
    }else if(!top && bottom){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }
}
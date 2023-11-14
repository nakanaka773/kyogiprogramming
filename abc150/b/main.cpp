#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    int count = 0;
    for(int i = 0; i < N;i++){
        if(S.substr(i,3)=="ABC"){
            count++;
        }
    }
    cout << count << endl;
}
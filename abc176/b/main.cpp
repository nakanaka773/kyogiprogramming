#include<iostream>
using namespace std; 
int main()
{
    string N;
    cin >> N;
    int com = 0;
    for(int i = 0; i < N.length();i++){
        com += int(N[i] - '0');
    }
    if(com % 9 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

}
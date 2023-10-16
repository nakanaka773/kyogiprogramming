#include<iostream>
using namespace std; 
int main()
{
    string N;
    cin >> N;
    bool seven = false;
    for(int i = 0; i < 3; i++){
        if(N[i] == '7') seven = true;
    }
    if(seven) cout << "Yes" << endl;
    else cout << "No" << endl;
}
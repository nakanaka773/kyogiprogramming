#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    bool correct = false;
    for(int i = 0;i < n;i++){
        string w;
        cin >> w;
        if(w=="and"||w=="not"||w=="that"||w=="the"||w=="you") correct = true;
    }
    if(correct) cout << "Yes" << endl;
    else cout << "No" << endl;

}
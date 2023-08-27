#include<iostream>
using namespace std; 
int main()
{
    int n;
    string s;
    cin >> n >> s;
    bool goukaku = true;
    for(int i = 0;i < n ;i++){
        if(s[i]=='x') goukaku = false
        if(s[i]=='o') goukaku = 

    }
    if(goukaku) cout << "Yes"<< endl;
    else cout << "No" << endl;

}
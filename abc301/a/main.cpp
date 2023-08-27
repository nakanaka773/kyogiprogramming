#include<iostream>
using namespace std; 
int main()
{
    int n;
    string s;
    cin >> n >>s;
    int count=0;
    for(int i = 0; i < n;i++){
        if(s[i]=='T') count ++;
    }
    if(count > n/2) cout << "T" << endl;
    else cout << "A" << endl;

}
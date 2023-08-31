#include<iostream>
using namespace std; 
int main()
{
    string S;
    cin >> S;
    int count = S.length();
    string ans = "";
    for(int i = 0; i < count ;i++){
        if(S[i] != 'a'&& S[i] != 'i'&&S[i] != 'u'&&S[i] != 'e'&&S[i] != 'o') ans += S[i];
    }
    cout << ans << endl;

}
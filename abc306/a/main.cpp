#include<iostream>
using namespace std; 
int main()
{
    int N;
    string s;
    cin >> N >> s;
    for(int i = 0; i < N ; i++){
        cout << s[i] << s[i];
    }
    cout << endl;

}
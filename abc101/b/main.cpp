#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        count += int(s[i]-'0');;
    }
    if(stoi(s) % count == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
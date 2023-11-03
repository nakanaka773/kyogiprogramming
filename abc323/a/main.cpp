#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    bool all = true;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 != 0 && s[i] !='0'){
            all = false;
        }
    }
    if(all){
        cout << "Yes" << endl;
    }else{
         cout << "No" << endl;
    }

}
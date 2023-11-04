#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int count = 0;
    for(int i =0; i < s.length(); i++){
        if(s[i] == '+'){
            count++;
        }else{
            count--;
        }
    }
    cout << count << endl;

}
#include<iostream>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int minA = 0;
    int maxZ = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i]== 'A'){
            minA = i;
            break;
        }
    }
    for(int i = 0;i < s.size();i++){
        if(s[i]== 'Z'){
            maxZ = i;
        }
    }
    cout << maxZ -minA + 1 << endl;


}
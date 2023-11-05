#include<iostream>
using namespace std; 
int main()
{
    char s[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> s[i][j];
            if(s[i][j] == '*'){

                char x = j+'a';
                cout << x  << 8 -i <<endl;
            }
    }
    }

}
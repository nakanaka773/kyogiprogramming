#include<iostream>
using namespace std; 
int main()
{
    string S;
    cin >> S;
    bool big = false;
    bool small = false;
    bool same = true;
    for(int i = 0; i < S.size();i++){
        if(isupper(S[i])){
            big = true;
        }else{
            small = true;
        }

    }

    for(int i= 0;i < S.size();i++){
        for(int j = i + 1; j < S.size(); j++){
            if(S[i]== S[j]) same = false;
        }
    }
    if(big&&small&&same) cout << "Yes" << endl;
    else cout <<  "No" << endl;

}
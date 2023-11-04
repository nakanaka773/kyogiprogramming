#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    string w[N];
    bool ok = true;
    for(int i = 0; i < N; i++){
        cin >> w[i];
        for(int j =0; j < i ; j++){
            if(w[i] == w[j]){
                ok = false;
            }
        }
    }
     for(int i = 0; i < N-1; i++){
        if(w[i][w[i].length()-1] != w[i+1][0]){
            ok = false;
        }
        
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;

    }

}
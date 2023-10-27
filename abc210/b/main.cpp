#include<iostream>
using namespace std; 
int main()
{
    int N;
    string S;
    cin >> N >> S;
    for(int i = 0; i < N; i++){
        if(S[i] =='1'){
            if(i % 2 !=0){
                cout << "Aoki" << endl;
            }else{
                cout << "Takahashi" << endl;
            }
            break;
        }
    }

}
#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N];
    bool exit = true;
    for(int i = 0 ;i < N ; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N-1; i ++){
        if(A[i] != A[i+1]){
            exit = false;
        }
    }
    if(exit){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
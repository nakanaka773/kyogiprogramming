#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N];
    bool exit =true;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A,A+N);
    for(int i = 0; i < N; i ++){
        if(A[i] != i+ 1){
            exit = false;
        }
    }
    if(exit){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
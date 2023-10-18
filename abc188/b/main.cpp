#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N], B[N];
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    for(int i = 0; i < N; i++){
        count += A[i]* B[i];
    }
    if(count == 0){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    
}
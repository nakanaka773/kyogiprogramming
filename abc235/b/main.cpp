#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N];
    
    for(int i= 0; i < N; i++){
        cin >> A[i];
    }
    int count = A[0];
    for(int i= 1; i < N; i++){
        if(A[i-1]< A[i] ){
            count = A[i];
        }else{
            break;
        }
    }
    cout << count << endl;
}
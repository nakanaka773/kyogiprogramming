#include<iostream>
using namespace std; 
int main()
{
    int N,K,M;
    cin >> N >> K >> M;
    int A[N];
    int count = 0;
    for(int i = 1; i < N; i++){
        cin >> A[i];
        count = count + A[i];
    }

}
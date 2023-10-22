#include<iostream>
#include <algorithm>
using namespace std; 
int main()
{
    int N, K;
    cin >>N >> K;
    int A[N];
    for(int i =0; i < N;i++){
        cin >> A[i];
    }
    sort(A, A+N,greater<int>());

    int count = 0;
    for(int i =0; i < K;i++){
        count += A[i];
    } 
    cout << count << endl;
}
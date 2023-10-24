#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int o = A[0];
    int s = A[0];
    for(int i = 0; i < N; i++){
        o = max(A[i],o);
        s = min(A[i],s);
    }
    cout << o -s << endl;

}
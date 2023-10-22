#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N], B[N];
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
        count += B[i]-A[i]+1;
    }
    cout << count << endl;

}
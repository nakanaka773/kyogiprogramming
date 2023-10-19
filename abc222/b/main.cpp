#include<iostream>
using namespace std; 
int main()
{
    int N, P;
    cin >> N >> P;
    int A[N];
    int count =  0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] < P){
            count ++;
        }
    }
    cout << count << endl;
}
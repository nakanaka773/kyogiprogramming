#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N];
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] > 10){
            count += A[i]-10;
        }
    }
    cout << count << endl;

}
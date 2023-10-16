#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N];
    bool s = true;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] % 2 == 0 && A[i] % 3 != 0 && A[i] % 5 != 0){
            s = false;
        }
    }
    if(s) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;

}
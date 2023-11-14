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

    if((count+K) >= N * M){
        if(N * M -count > 0){
            cout << N * M -count << endl;
        }else{
            cout << 0 << endl;
        }
        
    }else{
        cout << -1 << endl;
    }

}
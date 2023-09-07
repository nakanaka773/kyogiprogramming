#include<iostream>
using namespace std; 
int main()
{
    int N, X;
    cin >> N >> X;
    int M[N];
    int S = 0;

    int minit = 10000000000;
    for(int i = 0; i < N;i++) {
        cin >> M[i];
        S += M[i];
        if(minit > M[i]){
            minit = M[i];
        }
    }

    int ans = N + (X-S)/minit;
    cout << ans << endl;


}
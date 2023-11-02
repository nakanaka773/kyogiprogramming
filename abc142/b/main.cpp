#include<iostream>
using namespace std; 
int main()
{
    int N,K;
    cin >> N >> K;
    int H[N];
    int res = 0;
    for(int i =0; i < N; i++){
        cin >> H[i];
        if(H[i] >= K){
            res++;
        }
    }
    cout << res << endl;

}
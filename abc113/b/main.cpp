#include<iostream>
using namespace std; 
int main()
{
    int N,T,A;
    cin >> N >> T >> A;
    int H[N];
    double h[N];
    double minit = 10000000000.0;
    int ans = 0;
    for(int i =0;i < N;i++){
        cin >> H[i];
        h[i] = abs(T - H[i]*0.006);
        if(h[i]<minit){
            minit = h[i];
            ans = i;
        }
    }
    cout << ans << endl;
}
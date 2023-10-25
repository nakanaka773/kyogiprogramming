#include<iostream>
using namespace std; 
#include<algorithm>
int main()
{
    int N, K;
    cin >> N >> K;
    int P[N];
    for(int i = 0; i < N; i++){
        cin >> P[i];
    }
    sort(P, P+N);
    int count = 0;
    for(int i =0; i < K; i++){
        count += P[i];
    }
    cout << count << endl;

}
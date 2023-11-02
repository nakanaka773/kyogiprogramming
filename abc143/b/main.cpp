#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int res = 0;
    int d[N];
    for(int i = 0; i < N; i++){
        cin >> d[i];
        for(int j = 0; j < i; j++){
            res += d[i] * d[j];
        }
    }
    cout << res << endl;

}
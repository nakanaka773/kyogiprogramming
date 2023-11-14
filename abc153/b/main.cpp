#include<iostream>
using namespace std; 
int main()
{
    int H, N;
    cin >> H >> N;
    int a[N];
    int x = 0;
    for(int i = 0; i < N; i++){
        cin >> a[i];
        x +=a[i];
    }
    if(x >= H){
        cout <<"Yes" << endl;
    }else{
        cout <<"No" << endl;
    }

}
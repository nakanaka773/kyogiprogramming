#include<iostream>
using namespace std; 
int main()
{
    int n,m;
    cin >> n >> m;
    int a[m];
    int b[n];
    for(int i = 1; i <= n ; i ++){
        b[i] = i;
    }
    for(int i = 1; i <= m ; i ++){
        cin >> a[i];
        swap(b[a[i]],b[a[i]+1]);
    }
    for(int i = 1; i <= n ; i ++){
        cout << b[i];
    }
}
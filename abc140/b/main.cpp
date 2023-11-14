#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    int a[n],b[n],c[n-1];
    for(int i = 1; i <= n ;i++){
        cin >> a[i];
    }
    int x = 0;
    for(int i = 1; i <= n ;i++){
        cin >> b[i];
        x+= b[i];
    }
    for(int i = 1; i <= n-1 ;i++){
        cin >> c[i];
        if((a[i]+1) == a[i+1]){
            x += c[a[i]];
            cout << i << endl;
        }
    }
    cout << x << endl;
}
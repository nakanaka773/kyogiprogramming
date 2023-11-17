#include<iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == x) continue;
        else if(i == n-1) cout << a[i];
        else cout << a[i] << " ";
    }
    cout << endl;

}
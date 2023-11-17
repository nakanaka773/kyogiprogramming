#include<iostream>
using namespace std; 
int main()
{
    int n,s,d;
    cin >> n >> s >>d;
    int x[n];
    int y[n];
    bool ok = false;

    for(int i = 0; i < n ;i++){
        cin >> x[i];
        cin >> y[i];
        if(x[i] < s && y[i] > d){
            ok = true;
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
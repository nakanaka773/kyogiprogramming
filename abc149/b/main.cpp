#include<iostream>
using namespace std; 
int main()
{
    long long a,b,k;
    cin >> a >> b >> k;
    if(a>= k ){
        cout << a-k  << " ";
        cout << b << endl;
    }else if(a + b >= k){
        cout << 0 << " " ;
        cout << b-(k-a) << endl;
    }else{
        cout << 0 << " ";
        cout << 0 << endl;
    }

}
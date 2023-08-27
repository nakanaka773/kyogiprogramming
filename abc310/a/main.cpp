#include<iostream>
#include <vector> 
using namespace std; 
int main()
{
    int n,p,q;
    cin >> n >> p >> q;
    vector<int> d(n);
    for (int i = 0; i < n; ++i) {
      cin >> d[i];
    }
    for(int i = 0; i < n ;i++){
        p = min(p,(q+d[i]));
    }
    cout << p << endl;

}

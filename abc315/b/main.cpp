#include<iostream>
#include <algorithm>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> s(8);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
      sum = sum + s[i];
    }
    int ans = (sum + 1) / 2;
    cout << ans << endl;

}
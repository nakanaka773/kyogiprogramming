#include<iostream>
#include <algorithm>
using namespace std; 
int main()
{
    vector<int> A;

    for (int i = 0; i < A.size(); i++) {
      cin >> A[i];
    }

    sort(A.begin(), A.end());

    cout << A[1] << endl;
}
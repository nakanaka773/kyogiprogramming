//ちょっとむずい
#include<iostream>
#include <vector> 
using namespace std; 

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    int max_n=0;
    for (int i = 0; i < N; i++) {
      cin >> P[i];
    }
    for (int i = 1; i < N; i++) {
      max_n = max(P[i],max_n);
    }

    cout << max(0,max_n + 1 - P[0]) << endl;
    

}
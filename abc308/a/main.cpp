#include<iostream>
#include <vector> 
using namespace std; 

int main() {
    vector<int> s(8);
    for (int i = 0; i < s.size(); ++i) {
      cin >> s[i];
    }

    bool flag = true;
    
    for (int i = 0; i < 7; i++) {
        if(s[i] > s[i + 1]) flag = false;
        if(s[i] < 100 || s[i] > 675) flag = false;
        if(s[i] % 25 != 0) flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
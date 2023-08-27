// control+opsion+N

#include <algorithm>

string s;
    cin >> s;
    sort(s.begin(), s.end());

//ABCをCBAにする
    string a,b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
//最大値
max(a,b)
if() cout << "Yes"<< endl;
    else cout << "No" << endl;
//交換
swap(a,b)

#include<iostream>
using namespace std; 
int main()
{
    int A, B;
    cin >> A >>B;
    int C = B / A;
    if(B%A == 0) cout << C << endl;
    else cout << C+1 << endl;

}

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
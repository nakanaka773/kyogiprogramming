// control+opsion+N

isupper //大文字


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

//最小値
   for(int i = 0; i < N;i++) {
        cin >> M[i];
        if(minit > M[i]){
            minit = M[i];
        }
    }

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

//奇数判定のやつ
#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[210];
    for (int i = 0; i < N; ++i) cin >> A[i];

    int res = 0;
    //これがすごい　
    //while(true)は無限ループやけど　exist odd がtrueの時だけ抜け出す
    
    while (true) {
        bool exist_odd = false;
        for (int i = 0; i < N; ++i) {
            if (A[i] % 2 != 0) exist_odd = true;  // 奇数があったらフラグを立てる
        }

        if (exist_odd) break;  // 奇数があったら break

        // 操作を行えるなら操作を実際に行う
        for (int i = 0; i < N; ++i) {
            A[i] /= 2;
        }
        ++res;  // 操作回数をインクリメント
    }

    cout << res << endl;
    

}
#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[210];
    for (int i = 0; i < N; ++i) cin >> A[i];

    int res = 0;
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
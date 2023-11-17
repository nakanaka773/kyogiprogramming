#include<iostream>
using namespace std; 
int main()
int main() {
    int  n;
    cin >> n;
    vector<pair<int, string>> p(n); //点数を比較したいのでintを前に。
    for(int i = 0; i < n; i++) {
         string a;
         cin >> a;
         int b;
         cin >> b;
         p.at(i) = make_pair(b, a); //pairと合わせてint, stringの順に記述します。
    }

    sort(p.begin(), p.end());

    for(int i = 0; i < n; i++){
      string a;
      int b;
      tie(b, a) = p.at(i); //pair, make_pairと合わせてint, stringの順に記述します。
      cout << a << ": " << b << endl; //出力は任意の順番で問題ありません。
    }
}
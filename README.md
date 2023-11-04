# kyogiprogramming
export PATH="/Users/hirayamananakai/Library/Python/3.9/bin:$PATH"
echo $PATH


g++ main.cpp -o main
oj t -c "./main" -d ./tests/
acc submit main.cpp

touch main.cpp
cp ../../tempCodeRunnerFile.cpp  main.cpp

xのy乗
#include <math.h>
pow(x,y)

int  < long long
d
char to int

string N;
    cin >> N;
    int com = 0;
    for(int i = 0; i < N.length();i++){
        com += int(N[i] - '0');
    }

    248のA問題　テクニカル

数字からアルファベット　218/b
int p
↓
(char)('a'+p-1)

p=2 b

桁数たりない時
#include <iomanip>
cout << fixed << setprecision(10);
桁数指定できる

ながさ
s.length()

ソート昇順
#include<algorithm>
sort(x, x+5);

string 
 std::sort(word.begin(), word.end());

部分文章取り出し

s1 = "testtest";
cout << "s1.substr(3,3) = " << s1.substr(3,4) << endl;
⇧3番目以降の４もじぶん
ttes


char -> int 変換
string s;
    cin >> s;
    for(int i = 0; i < s.length()-1;i++){
        if(int(s[i]-'0') <= int(s[i+1]-'0')){
        }
    }

string int 
string s;
stoi(s)

四捨五入
#include <cmath>
round(x)

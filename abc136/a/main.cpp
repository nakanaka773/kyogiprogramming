#include<iostream>
using namespace std; 
int main()
{
    int A , B, C ;
    cin >> A >> B >> C;
    int remain = C - (A - B);

    if(remain < 0){
        cout << 0 << endl;
    }else{
        cout << remain << endl;
    }

}
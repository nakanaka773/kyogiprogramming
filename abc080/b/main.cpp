#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int x = N;
    int fx = 0;
    while(x > 1){
        fx += x % 10;
        x /= 10;
    }
    if(N % fx == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
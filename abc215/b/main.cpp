#include<iostream>
using namespace std; 
int main()
{
    long long N;
    cin >> N;
    long long x=1;
    int count = 0;
    while(N>=x){
        count ++;
        x *= 2;
    }
    cout << count-1 << endl;
}
#include<iostream>
using namespace std; 
int main()
{
    long long X;
    cin >> X;
    long long s = 100;
    int count = 0;
    while(X > s){
        s += s /100;
        count++;
    }
    cout << count << endl;

}
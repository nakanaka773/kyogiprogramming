#include<iostream>
using namespace std; 
int main()
{
    int N, K;
    cin >> N >> K;
    int count = 0;
    while (N >= 1)
    {
        N = N / K;
        count ++;
    }
    cout << count << endl;
    
}
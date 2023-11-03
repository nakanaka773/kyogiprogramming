#include<iostream>
using namespace std; 
int main()
{
    int N, M ,P;
    cin >> N >> M >> P;
    int count = 0;
    while(N >= M){
        M += P;
        count ++;
    }
    cout << count << endl;

}
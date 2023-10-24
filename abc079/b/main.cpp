#include<iostream>
using namespace std; 
int main()
{
    long long l[87];
    l[0] = 2;
    l[1] = 1;
    int N;
    cin >> N;
    for(int i = 2; i <= N;i++){
        l[i]= l[i-2]+ l[i-1];
    }
    cout << l[N] << endl;


}
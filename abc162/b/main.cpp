#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    long long counter = 0;
    for(int i = 1; i <= N;i++){
        if(i % 3 != 0 && i % 5 != 0) counter = counter + i;
    }
    cout << counter << endl;

}
#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int count = 0;
    int i = 0;
    while(count < N){
        i++;
        count += i;
    }
    cout << i << endl;

}
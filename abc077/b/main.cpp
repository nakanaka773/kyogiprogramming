#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int x = 1;
    for(int i = 1; x < N;i ++){
        x = (i+1)*(i+1);
    }
    cout << x << endl;

}
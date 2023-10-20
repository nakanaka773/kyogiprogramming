#include<iostream>
using namespace std; 
int main()
{
    int A, B;
    cin >> A >>B;
    int x = 1;
    int y = 1;
    for(int i = 0; i < A; i++){
        x *= B;
    }
    for(int i = 0; i < B; i++){
        y *= A;
    }
    cout << x+y << endl;

}
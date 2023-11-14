#include<iostream>
using namespace std; 
int main()
{
    int x;
    cin >> x;
    int uresi = 0;
    while(x >= 500){
        x -= 500;
        uresi += 1000;
    }
    while(x >= 5){
        x -= 5;
        uresi += 5;
    }
    cout << uresi << endl;

}
#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int x = N /100;
    if(N %100 <=11*x){
        cout << x << x << x << endl;
    }else{
        x++;
        cout << x << x << x << endl;
    }

}
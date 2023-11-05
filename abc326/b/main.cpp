#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    
    bool exit = false;
    for(int i = N; i < 1000; i++){
        int a = i / 100;
    int b = i / 10 % 10;
    int c = i % 10;
        if(a*b == c){
            cout << i << endl;
            break;
        }
    }

}
#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int counter = 0;
    for(int i = 1; i <= N; i++){
        if((i >= 1 &&i < 10) || (i >= 100 && i < 1000) || (i >= 10000 && i < 100000) ){
            counter++;
        }
    }
    cout << counter << endl;

}
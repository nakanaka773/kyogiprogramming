#include<iostream>
using namespace std; 
int main()
{
    int a,b;
    cin >> a >> b;
    int count = 0;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            count += i*100+j;
        }
    }
    cout << count << endl;

}
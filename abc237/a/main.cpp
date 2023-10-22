#include<iostream>
using namespace std; 
int main()
{
    long long N;
    cin >> N;
    if(N<0){
        N = -N;
    }
    for(int i = 0; i < 31; i++){
        N /=2;
    }
    if(N < 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
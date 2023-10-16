#include<iostream>
using namespace std; 
int main()
{
    int N;
    long long D;
    cin >> N >> D;
    int count = 0;
    long long x,y;
    for(int i = 0; i < N; i++){
        
        cin >> x >> y;
        if(x*x+y*y <= D*D){
            count++;
        }
    }
    cout << count << endl;

}
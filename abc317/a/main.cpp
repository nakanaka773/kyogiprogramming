#include<iostream>
using namespace std; 
int main()
{
    int n,h,x;
    cin >> n >> h >> x;
    int p;
    
    for(int i = 0; i < n; i++){
        cin >> p;
        if(x <= h+p){
            cout << i+1 << endl;
            break;
        }
    }

}
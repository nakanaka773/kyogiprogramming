#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    int maxnum;
    cin >> maxnum;
    int count = 1;
    for(int i = 1 ;i < n ;i++){
        int h;
        cin >> h;
        if(maxnum<h) count = i+1;
    }

    cout   << count << endl;


}
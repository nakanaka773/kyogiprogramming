#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    int p[n];
    int res = 0;
    for(int i =0; i < n ;i ++){
        cin >> p[i];
        
    }
    for(int i = 1; i < n-1 ; i++){
        if(p[i-1] < p[i] && p[i] < p[i + 1]){
            res++;
        }else if(p[i-1] > p[i] && p[i] > p[i + 1]){
            res++;
        }
    }
    cout << res << endl;

}
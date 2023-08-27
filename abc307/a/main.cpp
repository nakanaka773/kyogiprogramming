#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a,b,c,d,e,f,g;
        cin >> a >> b >> c >> d >> e >> f >> g;
        if(i==n-1){
            cout << a+b+c+d+e+f+g << endl;
        }else{
            cout << a+b+c+d+e+f+g << " ";
        }
        
    }
}
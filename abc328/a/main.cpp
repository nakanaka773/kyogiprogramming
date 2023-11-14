#include<iostream>
using namespace std; 
int main()
{
    int n,x;
    cin >> n >> x;
    int s[n];
    int count = 0;
    for(int i = 0; i < n;i++){
        cin >> s[i];
        if(s[i] <= x){
            count += s[i];
        }
    }
    cout << count << endl;

}
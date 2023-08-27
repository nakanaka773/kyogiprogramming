#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    int count= 0;
    for(int i = 0;i < n;i ++){
        string s;
        cin >> s;
        if(s=="For") count ++;
    }

    if(n/2<count)cout << "Yes"<< endl;
    else cout << "No" << endl;


}
#include<iostream>
using namespace std; 
int main()
{
    int n,m;
    cin >> n >> m;
    string s[n];
    string t[m];
    for(int i = 0; i < n;i++){
        cin >> s[i];
    }
    for(int j = 0; j < m;j++){
        cin >> t[j];
    }
    int count = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            if(s[i].substr(3,3)==t[j]){
                count ++;
                break;
            }
    }
      
    }
    cout << count << endl;
    
}
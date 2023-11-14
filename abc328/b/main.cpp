#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    int d[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> d[i];
        if(i < 9){
            if(i+1 <= d[i]){
                count++;
                //cout << i+1 << endl;
            }
            if(((i+1)*10+i+1 )<= d[i]){
                count ++;
                //cout << i+1 << endl;
            }
        }
        if(i == 10||i == 21||i == 32||i == 43||i == 54||i == 65||i == 76||i == 87||i == 98){
            if(i+1 <= d[i]){
                count ++;
                //cout << i+1 << endl;
            }
            if((i+1)/10 <= d[i]){
                count ++;
            }
        }
    }
    cout << count << endl;

}
#include<iostream>
using namespace std; 
int main()
{
    int a[5];
    int count = 0;
    for(int i = 0; i < 5 ; i++){
        cin >> a[i];
        for(int j = 0; j < i ; j++){
            if(a[i] != a[j]){
                count++;
            }
        }
    }
    cout << count << endl;

}
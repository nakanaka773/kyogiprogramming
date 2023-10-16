#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    bool ikeru = false;
    for(int i = 1;i < 10;i++){
        for(int j = 1;j < 10;j++){
            if(i*j==N) {
                ikeru = true;
                break;
            }
        
        }
    }
    if(ikeru) cout << "Yes" << endl;
    else cout << "No" << endl;

}
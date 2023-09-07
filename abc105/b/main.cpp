#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int x = N / 4;
    bool goukei = false;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            int total = 4*i+7*j;
            if(total == N){
                goukei = true;
                break;
            }
      }
    }
    if(goukei) cout << "Yes" << endl;
    else cout << "No" << endl;
}
#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    int N, M;
    cin >> N >> M;
    int A[N];
    int s = 0;
    for(int i = 0; i < N ; i++){
        cin >> A[i];
        s += A[i];
    }
    int count = 0;
    for(int i = 0; i < N ; i++){
        if(A[i]*4*M >= s){
            count ++;
        }
    }
    if(count >=M){
        cout << "Yes"<< endl;
    }else{
        cout << "No" << endl;
    }

}
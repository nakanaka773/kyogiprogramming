#include<iostream>
using namespace std; 
int main()
{
    int N, X;
    cin >> N >> X;
    int A[N];
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        count += A[i];
    }
    if(X >= count - N/2){
    cout  <<  "Yes"<< endl;
    }else{
        cout << "No" << endl;
    }

}
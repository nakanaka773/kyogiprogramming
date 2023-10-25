#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N];
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(i % 2 ==0 && A[i]%2 != 0){
            count++;
        }
    }
    cout  << count << endl;

}
#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N];
    int counter = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        bool exit = false;
        for(int j = 0; j < N; j++){
            if(A[i]==A[j]){
                exit = true;
            }
    }
     if(!exit){
                counter++;
    }
    }
    cout << counter << endl;
    
}
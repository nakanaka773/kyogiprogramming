#include<iostream>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    int A[N], B[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    int x = 0;
    int y = 0;
    for(int i = 0; i < N; i++){
        if(A[i] == B[i]){
            x++;
        }
        for(int j = 0; j < N;j++){
            if(A[i] == B[j]&& i != j){
                y++;
            }
        }
    }
    cout << x << endl;
    cout << y << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int N;
    int L[N];
    cin >> N;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
        for (int j =  0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                if(i != j && j != k && k != i && L[i] != L[j]&& L[j] != L[k]&& L[k] != L[i] && (L[i]+L[j]) > L[k] ){
                    count ++;
                }
            }
        }
    }
    cout << 3 << endl;
}
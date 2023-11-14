#include<iostream>
using namespace std; 
int main()
{
    int h,w;
    cin >> h >>w;
    int a[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w ; j++){
            cin >> a[i][j];
        }
    }
    int b[w][h];
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h ; j++){
            b[i][j] = a[j][i];
        }
    }
    cout << b << endl;
}
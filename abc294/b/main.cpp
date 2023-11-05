#include<iostream>
using namespace std; 
int main()
{
    int h,w;
    cin >> h >> w;
    int a[h][w];
    char x[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
            if(a[i][j] == 0){
                x[i][j] = '.';
            }else{
                x[i][j] = a[i][j]+'a';
            }
        }
    }
    cout << x[h][w] << endl;

}
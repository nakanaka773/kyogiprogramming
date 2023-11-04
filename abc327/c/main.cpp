#include <iostream>
using namespace std;
#include <algorithm>
int main()
{

    string a[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
        }
    }
    string X[9] ={};
    string Y[9] ={};

    bool all = true;
    for(int i=0; i<9; i++){
        for(int j = 0; j < 9; j++){
            X[j] += a[i][j];
            Y[j] += a[i][j];
        }
	}

    string Z[9]={};

    for(int i=0; i<9; i++){
        for(int j = 0; j < 9; j++){
            if(i < 3 && j < 3){
                Z[0] += a[i][j];
            }else if(i < 3 && j < 6){
                 Z[1] += a[i][j];

            }else if(i < 3 && j < 9){
                 Z[2] += a[i][j];
            }else if(i < 6 && j < 3){
                 Z[3] += a[i][j];
            }else if(i < 6 && j < 6){
                 Z[4] += a[i][j];
            }else if(i < 6 && j < 9){
                 Z[5] += a[i][j];
            }else if(i < 9 && j < 3){
                 Z[6] += a[i][j];
            }else if(i < 9 && j < 6){
                 Z[7] += a[i][j];
            }else{
                Z[8] += a[i][j];
            }
        }
	}
    for(int i=0; i<9; i++){
        sort(X[i].begin(), X[i].end());
        sort(Y[i].begin(), Y[i].end());
        sort(Z[i].begin(), Z[i].end());
        if(X[i] != "123456789"){
            all = false;
        }else if(Y[i] != "123456789"){
            all = false;
        }else if(Z[i] != "123456789"){
            all = false;
        }else{
            all = true;
        }
        cout << Z[i] << endl;
	}




    
    if(all){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}
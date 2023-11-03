#include<iostream>
using namespace std; 

int add(int a) {
    if(a == 4 || a == 6 || a == 9 ||a ==11){
        return 0;
    }else if(a==2){
        return 1;
    }else{
        return 2;
    }
}

int main()
{
    int x,y;
    cin >> x >> y;
    if(add(x) == add(y)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
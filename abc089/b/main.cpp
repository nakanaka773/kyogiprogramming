#include<iostream>
#include <set>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    set<char> s;    
    for(int i = 0; i < N ; i++){
        char c;
        cin  >> c;
        s.insert(c);
    }
    if (s.size() == 3){
        cout <<"Three" << endl;
    }else{
        cout <<"Four" << endl;
    }

}
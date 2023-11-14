#include<iostream>
#include <algorithm>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int N = s.length();
    bool all = false;
    bool first = false;
    bool second = false;
    string alls(s);
    reverse(alls.begin(), alls.end());
    if(alls== s){
        all = true;
    }
    string firsts = s.substr(0,(N-1)/2 );
    string seconds = s.substr((N+3)/2 -1 ,N);
    string notfirsts(firsts);
    reverse(notfirsts.begin(), notfirsts.end());
    string notseconds(seconds);
    reverse(notseconds.begin(), notseconds.end());
    if(firsts == notfirsts){
        first = true;
    }
    if(seconds == notseconds){
        second = true;
    }
    if(all && first && second){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
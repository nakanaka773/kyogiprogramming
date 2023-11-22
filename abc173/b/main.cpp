#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin >> n;
    string s[n];
    int ac = 0;
    int wa = 0;
    int tle = 0;
    int re = 0;
    for(int i =0; i < n ; i++){
        cin >> s[i];
        if(s[i] == "AC") ac ++;
        else if(s[i] == "WA") wa++;
        else if(s[i] == "TLE") tle++;
        else re++;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;

}
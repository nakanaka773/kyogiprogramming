#include<iostream>
using namespace std; 
int main()
{
    int N;
    string pie ="1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    cin >> N;;
    string ans = "3.";
    for(int i =0 ; i< N ;i++){
        ans += pie[i];
    }
    cout << ans << endl;


}
#include<iostream>
#include<algorithm>
using namespace std; 
int main()
{
    int N;
    cin >> N;
    vector<pair<int,int> > v;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    cout << v[0] << endl;

}
#include <bits/stdc++.h>
using namespace std;
int temp(int a, int b){
    return a > b ? a : b;
}
int main()
{
    vector<char> a;
    map<int,int> m;
    int n;cin >> n;
    for(int i=0; i<n; i++){
        int x;cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),temp);
    for(auto x:a){
        cout << x << " ";
    }
    // for(auto it:m){
    //     cout << it.first << " " << it.second << endl;
    // }
    for(pair<int,int> x:m){
        cout << x.first << " " << x.second << endl;
    }
    __gcd(2,3);
    return 0;
}
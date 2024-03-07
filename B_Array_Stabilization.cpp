#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    if(n == 2){
        cout << 0 << endl;
    }
    else{
        cout << min((v[n -1] - v[1]), (v[n -2] - v[0])) << endl;
    }
    return 0;
}
/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/06/07
|Time: 00:50:15
|Problem: B_Books
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
void solve() {
    int n, t; cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    // sort(v.begin(), v.end());
    ll ans = 0, cn =0;
    // for(auto &i : v) cout << i << ' ';
    // cout << endl;
    for(int i = 0; i < n; i++){
        if(ans + v[i] <= t){
            ans += v[i];
            cn++;
        }
    }
    cout << cn << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
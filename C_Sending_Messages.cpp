/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/06/07
|Time: 02:02:02
|Problem: C_Sending_Messages
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
void solve() {
    tc{
        ll n, f, a, b; cin >> n >> f >> a >> b;
        vector<ll> v(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        for(int i = 1; i <= n; i++){
            f -= min((a * (v[i] - v[i - 1])), b);
        }
        if(f > 0) yes
        else no
        // cout << f << endl;

        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
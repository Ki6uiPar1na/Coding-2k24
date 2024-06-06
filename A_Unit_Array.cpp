/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/06/06
|Time: 20:48:52
|Problem: A_Unit_Array
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
        int n; cin >> n;
        vector<int> v(n);
        for(auto &i : v) cin >> i;
        int cn1 = 0, cn2 = 0;
        int ans = 0;
        for(int i  = 0; i < n; i++){
            if(v[i] > 0) cn1++;
            else cn2++;
        }
        while((cn1 - cn2) < 0 or (cn2 % 2 != 0)){
            cn1++;
            cn2--;
            ans++;
        }
        cout << ans << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
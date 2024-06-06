/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/05/30
|Time: 01:29:28
|Problem: template
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
void solve() {
    int n; cin >> n; 
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int cn1 = 0, cn2 = 0, cn3 = 0, cn4 = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 4) cn4++;
        else if(v[i] == 3) cn3++;
        else if(v[i] == 2) cn2++;
        else cn1++;
    }
    ans += cn4;
    cn4 = 0;
    int mn1 = min(cn1, cn3);
    ans += mn1;
    cn1 -= mn1, cn3 -= mn1;

    ans += cn3;
    ans += cn2 / 2;
    // cn2 -= (cn2 / 2);
    cout << ans << endl;
    cout << cn1 << ' ' << cn2 << ' ' << cn3 << ' ' << cn4 << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
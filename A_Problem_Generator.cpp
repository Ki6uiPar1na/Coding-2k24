/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/06/05
|Time: 02:05:33
|Problem: A_Problem_Generator
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
        int n, m; cin >> n >> m;
        string s; cin >> s;
        set<char> ch;
        for(int i = 0; i < n; i++){
            ch.insert(s[i]);
        }
        int ans =  ((7 - ch.size()) * m);
        if(m % 2 == 0){
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
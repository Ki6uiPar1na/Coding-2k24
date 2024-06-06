/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/06/05
|Time: 21:03:19
|Problem: Election_Hopes
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
void solve() {
    int a, b; cin >> a >> b;
    if(a >= b * 2){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
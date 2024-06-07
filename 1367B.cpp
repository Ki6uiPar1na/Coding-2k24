/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/06/07
|Time: 11:31:25
|Problem: B_Even_Array
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
    for(auto &i : v) cin >> i;
    int even = 0, odd = 0, evenElement = 0, oddElement = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 and v[i] % 2 != 0){
            oddElement++;
        }
        else if(i % 2 != 0 and v[i] % 2 == 0){
            evenElement++;
        }
    }
    if(oddElement != evenElement) cout << -1 << endl;
    else cout << oddElement << endl;
    // cout << evenElement << ' ' << oddElement << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    tc
    solve();

    return 0;
}
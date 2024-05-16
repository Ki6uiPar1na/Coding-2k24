/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/05/16
|Time: 14:58:25
|Problem: Number_Line_Jumps
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
void solve() {
    int x1, v1, x2, v2; 
    cin >> x1 >> v1 >> x2 >> v2;
    if(x1 > x2){
        if(v2 >= ceil(float(v1) / 2)){
            yes
        }
        else no
    }
    else{
        if(ceil(float(v2) / 2) <= v1){
            yes
        }
        else no
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
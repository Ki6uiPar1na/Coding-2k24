/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/05/16
|Time: 01:18:35
|Problem: Time_Conversion
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
void solve() {
    string s; cin >> s;
    int len = s.length();
    if(s[len - 2] == 'A'){
        string ss; ss += s[0], ss += s[1];
        int n = stoi(ss);
        if(n == 12){
            s[0] = '0', s[1] = '0';
        }
    }
    else{
        if(s[0] == '1' and s[1] == '2');
        else{
        string ss; ss += s[0], ss += s[1];
        int n = stoi(ss);
        n += 12;
        ss = to_string(n);
        if(ss.length() == 1){
            s[0] = '0', s[1] = ss[0];
        }
        else{
            s[0] = ss[0], s[1] = ss[1];
        }
        }
    }
    for(int i = 0; i < len - 2; i++){
        cout << s[i];
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        map<int, int> mp;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int flag = -1;
        for(auto &i : mp){
            if(i.second == 1){  
                flag = i.first; 
                break;
            }
        }
        if(flag != -1) {
            for(int i = 1; i <= n; i++){
                if(v[i] == flag){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}

int main() {
    solve();
    return 0;
}

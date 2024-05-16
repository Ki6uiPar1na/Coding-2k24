#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n;  
        cin >> n;
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }
        int cn = 0;
        for (int i = 0; i < n; i++) {
            if (v1[i] > v2[i]) {
                v1.pop_back();
                v1.insert(v1.begin() + i, v2[i]);
                cn++;
            }
        }
        cout << cn << endl;
    }
}

int main() {
    solve();
    return 0;
}

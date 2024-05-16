#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t; 
    cin >> t;
    
    while (t--) {
        string s; cin >> s;
        auto it = s.begin();
        s.erase(it +  1);
        cout << s << endl;

    }
}

int main() {
    solve();
    return 0;
}

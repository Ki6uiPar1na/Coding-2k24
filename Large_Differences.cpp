/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/06/05
|Time: 21:20:41
|Problem: Large_Differences
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
void solve() {
    tc {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        // Calculate the sum of adjacent differences without any operation
        ll sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += abs(v[i] - v[i + 1]);
        }

        // Try performing the operation for each element
        ll max_diff = INT_MIN;
        for (int i = 0; i < n; i++) {
            // Try setting the element to 1
            max_diff = max(max_diff, abs(1 - v[i]));
            // Try setting the element to K
            max_diff = max(max_diff, abs(k - v[i]));
        }

        // Try performing the operation for each pair of adjacent elements
        for (int i = 0; i < n - 1; i++) {
            // Try setting both elements to any value between 1 and K
            for (int x = 1; x <= k; x++) {
                max_diff = max(max_diff, abs(x - v[i]) + abs(x - v[i + 1]));
            }
        }

        // Output the maximum possible value of the sum of adjacent differences
        cout << sum + max_diff << endl;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

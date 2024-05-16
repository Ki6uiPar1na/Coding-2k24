/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/05/10
|Time: 22:36:53
|Problem: D_Binary_Cut
|_____________________________________________________ */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)

// Check Prime Number
bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Factorial Function
ll factorial(int n) {
    ll fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Composite Number Check
bool is_composite(int n) {
    return !is_prime(n);
}

// Binary Search
bool bin_search(int l, int r, int arr[], int x) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return false;
}

// Sum of Digits
ll digit_sum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    tc{
        string s; cin >> s;
        int ans = 1;
        if(is_sorted(s.begin(), s.end())){
            cout << ans << endl;
        }
        else{
            int cn1 = 0, cn2 = 0;
            for(int i = 0; i < s.size() - 1; i++){
                if(s[i] == '1' and s[i + 1] == '0'){
                    cn1++;
                }
                else if(s[i] == '0' and s[i + 1] == '1'){
                    cn2++;
                }
            }
            if(cn1 == 0 && cn2 == 0) cout << 1 << endl;
            else if(cn1 == 1 and cn2 == 0) cout << 2 << endl;
            else if(cn1 == 0 and cn2 == 1) cout << 1 << endl;
            else  
                cout << cn1 + cn2<< endl;
        }
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
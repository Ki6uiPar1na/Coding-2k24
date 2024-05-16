/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/05/11
|Time: 00:54:08
|Problem: E_Find_the_Car
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
        int n, k, q; cin >> n >> k >> q;
        vector<int> a(k), b(k);
        for(int i = 0; i < k; i++){
            cin >> a[i];
        }
        for(int i = 0; i < k; i++){
            cin >> b[i];
        }
        vector<int> speed;
        for(int i = 0; i < k; i++){
            speed.push_back(abs(b[i] - b[i - 1]) / abs(a[i] - a[i - 1]));
            cout << speed[i] << ' ';
        }
        while(q--){
            int query; cin >> query;
            int index = lower_bound(a.begin(), a.end(), query) - a.begin();
            if(index == 0) index++;
            cout << index * query << ' ';
        }

        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
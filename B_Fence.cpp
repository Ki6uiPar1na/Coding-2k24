#include<bits/stdc++.h>


using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    vector<int> sum;

    int window_sum = 0;
    for (int i = 0; i < k; ++i) {
        window_sum += v[i];
    }
    sum.push_back(window_sum);

    for (int i = 1; i <= n - k; ++i) {
        window_sum = window_sum - v[i - 1] + v[i + k - 1];
        sum.push_back(window_sum);
    }
    int mn = INT_MAX;
    int f = -1;
    for(int i = 0; i < sum.size(); i++){
        if(sum[i] < mn){
            mn = sum[i];
            f = i;
        }
    }
    cout << f + 1 << endl;
    return 0;
}

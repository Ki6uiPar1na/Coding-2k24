/*
Author: Ki6ui-Par1na
Date: 2024/04/30
Time: $
Problem: B_Battle_Cows
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cout(n) cout << n << endl;
#define tc ll t; cin >> t; while(t--)
 
//Check Prime Numberr: 
bool Prime(int n){
    // Corner case
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
bool fact(int n){
int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
return factorial;
}
bool Composite(int n){
if(!Prime(n)){
return true;
}
else{
return false;
}
}
//Binary Serching
bool bin_search(int l, int r, int A[], int x){
    while(l <= r){
        int mid = (l + r) / 2;
        if(A[mid] == x){
            return true;
        }
        else{
            if(A[mid] < x){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
    }
    return false;
}
ll Digit_sum(ll n){
    ll sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve(){
    tc{
        int n, k; cin >> n >> k;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }
        int cn = 0;
        // k--;
        int maxCowPosition = 1, maxCowValue = INT_MIN;
        for(int i = 1; i <= n; i++){
            if(v[i] > v[k] and i < k){
                maxCowValue = v[i];
                maxCowPosition = i;
                break;
            }
        }
        if(maxCowPosition < k){
            int temp = v[1]; 
            v[1] = v[k];
            v[k] = temp;
        }
        for(int i = 1; i <= n; i++){
            cout << v[i] << ' ';
        }
        cout << endl;
        // cout << maxCowPosition << endl;
        // cout << cn << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
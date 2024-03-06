/*
                                  ``````````````
                              ```     	STAY  ```
                           ```    		WITH      ```
                        ```	            PALESTINE    ```
                            ```		   	     		```
                                ```		    	```
                                    ````````````
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
    int n; cin >> n;
    vector<int> worms(n);
    for(auto &i : worms){
        cin >> i;
    }
    int juicy_worms; cin >> juicy_worms;
    vector<int> juicy_worms_level(juicy_worms);
    for(auto &i : juicy_worms_level){
        cin >> i;
    }
    vector<int> pre_sum(worms);
    pre_sum[0] = worms[0];
    for(int i = 1; i < n; i++){
        pre_sum[i] = pre_sum[i - 1] + worms[i];
    }
    // for(auto &i : pre_sum){
    //     cout << i << ' '; 
    // }
    cout << endl;
    for(int i = 0; i < juicy_worms; i++){
        auto it = lower_bound(pre_sum.begin(), pre_sum.end(),juicy_worms_level[i]);
        int level = it - pre_sum.begin();
        cout << level + 1 << endl;
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
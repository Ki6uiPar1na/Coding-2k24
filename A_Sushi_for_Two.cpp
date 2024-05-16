/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/05/16
|Time: 14:06:54
|Problem: A_Sushi_for_Two
|____________________________________________________*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cn1 = 0, cn2 = 0, mx1 = -1, mx2 = -1, countOne = 0, countTwo = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            countOne++;
            cn1++;
            mx1 = max(mx1, cn1);
            mx2 = max(mx2, cn2);

            cn2 = 0;
        }
        else
        {
            countTwo++;
            cn2++;
            mx1 = max(mx1, cn1);
            mx2 = max(mx2, cn2);

            cn1 = 0;
        }
    }
    if (countOne > countTwo)
    {
        cout << 2 * mx2 << endl;
    }
    else
    {
        cout << 2 * mx1 << endl;
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
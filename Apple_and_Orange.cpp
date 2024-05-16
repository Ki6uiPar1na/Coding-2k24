
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, a, b, m , n; 
    cin >> s >> t >> a >> b >> m >> n;

    vector<int> apple(m), orange(n);

    for(int i = 1; i <= m; i++) cin >> apple[i];
    for(int i = 1; i <= n; i++) cin >> orange[i];

    int dropApple = 0, dropOrange = 0;

    int distantFromAppleTree = abs(a - s), distantFromOrangeTree = abs(b - s) * -1;

    for(int i = 1; i <= m; i++){
        if(apple[i] > 0){
            if(apple[i] >= distantFromAppleTree)
                dropApple++;
        }
    }

    for(int i = 1; i <= n; i++){
        if(orange[i] < 0){
            if(abs(orange[i]) >= distantFromOrangeTree)
                dropOrange++;
        }
    }
    cout << dropApple << '\n' << dropOrange << '\n';
    
}
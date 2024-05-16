#include <bits/stdc++.h>
using namespace std;

#define N 100005

void solve()
{
    vector<int> visited(N, -1);
    vector<int> adj[N];
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;
    q.push(1);
    visited[1] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << endl;
        vector<int> :: iterator it;
        for(it = adj[node].begin(); it != adj[node].end(); it++){
            if(visited[*it] == -1){
                visited[*it] = 1;
                q.push(*it);
            }
        }
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

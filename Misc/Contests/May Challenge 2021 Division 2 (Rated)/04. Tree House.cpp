// passes most test cases

#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <set>
#include <algorithm>

#define MAX 300005
#define MOD 1000000007

using namespace std;

vector<int> adj[MAX];
int subtree_size[MAX];
bool visited[MAX];
long long values[MAX];

struct cmp {
    bool operator() (int a, int b) const {
        return subtree_size[a] > subtree_size[b];
    }
};

bool comp(int a, int b) {
    return subtree_size[a] > subtree_size[b];
}

int count_subtree_size(int node) {
    if(visited[node]) return 0;

    visited[node] = true;

    subtree_size[node] = 1;
    
    for(int child : adj[node]) {
        subtree_size[node] += count_subtree_size(child);
    }

    return subtree_size[node];
}

int main() {
    int t; cin>>t;

    while(t--) {
        int n,x; cin>>n>>x;

        for(int i=0; i<MAX; i++) {
            adj[i].clear();
            visited[i] = false;
            values[i] = 0;
        }

        for(int i=0; i<n-1; i++) {
            int u,v; cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        count_subtree_size(1);

        // multiset<int, cmp> ordered_adj[n+1];

        // for(int i=1; i<=n; i++) {
        //     for(int child : adj[i]) ordered_adj[i].insert(child);
        // }

        for(int i=1; i<=n; i++) {
            sort(adj[i].begin(), adj[i].end(), comp);
        }

        memset(visited, 0, sizeof(visited));

        // bfs traversal to assign values to nodes
        queue<int> q;
        values[1] = x;
        q.push(1);

        while(!q.empty()) {
            int parent = q.front(); q.pop();
            visited[parent] = true;
            int factor = 1;
            for(int child: adj[parent]) {
                if(visited[child]) continue;
                values[child] = (values[parent] * factor) % MOD;
                factor++;
                q.push(child);
            }

        }
        
        long long sum = 0;
        for(int i=1; i<=n; i++) sum = (sum + values[i]) % MOD;

        cout<<sum % MOD<<endl;
    }

    return 0;
}
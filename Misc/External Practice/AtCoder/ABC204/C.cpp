#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <stack>
#include <queue>

using namespace std;

int n,m, nodes_ticked;
vector<vector<int>> adjList;
bool visited[2005];

void dfs(int source) {
    if(visited[source]) return;
    visited[source] = true;
    nodes_ticked++;
    
    for(int dest : adjList[source]) {
        dfs(dest);
    }
}

int main() {
    cin>>n>>m;
    int total = 0;

    adjList = vector<vector<int>>(n+1);

    for(int i=0; i<m; i++) {
        int x,y; cin>>x>>y;
        adjList[x].push_back(y);
    }

    for(int source = 1; source <= n; source++) {
        memset(visited, 0, sizeof(visited));
        nodes_ticked = 0;
        dfs(source);
        total += nodes_ticked;
    }

    cout<<total<<endl;

    return 0;
}
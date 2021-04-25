#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string grid[100002];
int n,m;
vector<int> islands;
int curr_island = 0;

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int i, int j) {
    if(!valid(i,j) || grid[i][j] == 'C' || grid[i][j] == '0') return;

    grid[i][j] = 'C';
    curr_island++;
    
    dfs(i, j+1);
    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j-1);
}

int main() {
    int t; cin>>t;

    while(t--) {
        cin>>n>>m;
        for(int i=0; i<n; i++) cin>>grid[i];
        islands.clear();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == '1') {
                    curr_island = 0;
                    dfs(i,j);
                    islands.push_back(curr_island);
                }
            }
        }

        int cells = 0;
        sort(islands.rbegin(), islands.rend());

        for(int i=1; i<islands.size(); i+=2) {
            cells += islands[i];
        }
        cout<<cells<<endl;
    }

    return 0;
}
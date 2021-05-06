#include <iostream>
#include <utility>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        char grid[n][n];
        pair<int, int> p1, p2;
        bool isP1 = true;
        for(int i=0; i<n; i++)for(int j=0; j<n; j++) {
            cin>>grid[i][j];
            if(grid[i][j] == '*') {
                if(isP1) {
                    p1 = make_pair(i,j);
                    isP1 = false;
                }
                else {
                    p2 = make_pair(i,j);
                }
            }
        }

        if(p1.first == p2.first) { // same row
            int p3y = p1.second, p4y = p2.second;
            for(int i=0; i<n; i++) {
                if(grid[i][p3y] == '.') {
                    grid[i][p3y] = '*';
                    grid[i][p4y] = '*';
                    break;
                }
            }
        }
        else if(p1.second == p2.second) { // same column
            int p3x = p1.first, p4x = p2.first;
            for(int i=0; i<n; i++) {
                if(grid[p3x][i] == '.') {
                    grid[p3x][i] = '*';
                    grid[p4x][i] = '*';
                    break;
                }
            }
        }
        else {
            grid[p1.first][p2.second] = '*';
            grid[p2.first][p1.first] = '*';
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) cout<<grid[i][j];
            cout<<endl;
        }
    }

    return 0;
}
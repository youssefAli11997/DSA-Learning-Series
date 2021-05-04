#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        char r,c; cin>>r>>c;
        int grid[r][c];

        for(int i=0; i<r; i++) for(int j=0; j<c; j++) cin>>grid[i][j];
        bool stable = true;
        // check border points
        if(grid[0][0] >= 2 || grid[r-1][0] >= 2 || grid[0][c-1] >= 2 || grid[r-1][c-1] >= 2)
            stable = false;
        
        // check first and last rows
        for(int i=1; i<c-1; i++) {
            if(grid[0][i] >= 3 || grid[r-1][i] >= 3) {
                stable = false;
                break;
            }
        }

        // check first and last columns
        for(int i=1; i<r-1; i++) {
            if(grid[i][0] >= 3 || grid[i][c-1] >= 3) {
                stable = false;
                break;
            }
        }

        // check inner cells
        for(int i=1; i<r-1; i++) {
            for(int j=1; j<c-1; j++) {
                if(grid[i][j] >= 4) {
                    stable = false;
                    break;
                }
            }
        }

        cout<<(stable? "Stable" : "Unstable")<<endl;
    }

    return 0;
}
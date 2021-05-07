#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        string grid[3];
        for(int i=0; i<3; i++) cin>>grid[i];

        int empty_cells = 0, xs = 0, os = 0;
        vector<char> winners;

        for(int i=0; i<3; i++) for(int j=0; j<3; j++) {
            if(grid[i][j] == '_') empty_cells++;
            if(grid[i][j] == 'X') xs++;
            if(grid[i][j] == 'O') os++;
        }

        // check for improper Xs and Os
        if(os > xs || xs > os+1) {
            cout<<"3\n";
            continue;
        }
        
        //check rows for wins
        for(int i=0; i<3; i++) {
            if(grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][2] != '_') {
                winners.push_back(grid[i][0]);
            }
        }

        //check columns for wins
        for(int i=0; i<3; i++) {
            if(grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i] && grid[2][i] != '_') {
                winners.push_back(grid[0][i]);
            }
        }

        //check ltr diagonal for wins
        if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[2][2] != '_') {
            winners.push_back(grid[0][0]);
        }

        //check rtl diagonal for wins
        if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[2][0] != '_') {
            winners.push_back(grid[0][2]);
        }

        if(winners.size() > 2) cout<<"3\n";
        else if(winners.size() == 2) {
            if(winners[0] == 'X' && winners[1] == 'X' && xs == 5) cout<<"1\n";
            else cout<<"3\n";
        }
        else if(winners.size() == 1) {
            if(winners[0] == 'X' && xs == os+1) cout<<"1\n";
            else if(winners[0] == 'O' && os == xs) cout<<"1\n";
            else cout<<"3\n";
        }
        else if(empty_cells == 0) cout<<"1\n";
        else cout<<"2\n";
    }

    return 0;
}
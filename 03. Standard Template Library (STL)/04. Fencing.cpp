#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n,m,k; cin>>n>>m>>k;
        long long fences = 0;

        set<pair<int,int>> plants;

        for(int i=0; i<k; i++) {
            int r,c; cin>>r>>c;
            plants.insert({r,c});
            fences += 4;
        }

        for(pair<int, int> plant : plants) {
            if(plants.find({plant.first, plant.second+1}) != plants.end()) {
                fences -= 2;
            }
            if(plants.find({plant.first+1, plant.second}) != plants.end()) {
                fences -= 2;
            }
        }

        cout<<fences<<endl;
    }

    return 0;
}
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
        int n,m; cin>>n>>m;
        vector<int> vec(n);
        for(int i=1; i<=n; i++) vec[i-1] = i;

        for(int i=0; i<m; i++) {
            int x; cin>>x;
            vec.erase(find(vec.begin(), vec.end(), x));
        }
        
        for(int i=0; i<vec.size(); i+=2) cout<<vec[i]<<" ";
        cout<<endl;
        
        for(int i=1; i<vec.size(); i+=2) cout<<vec[i]<<" ";
        cout<<endl;

    }

    return 0;
}
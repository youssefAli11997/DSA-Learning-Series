#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
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

        string os[n], ss[n-1];

        for(int i=0; i<n; i++) cin>>os[i];

        for(int i=0; i<n-1; i++) cin>>ss[i];

        int freq[m][26] = {0};

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                freq[j][os[i][j]-'a']++;
            }
        }

        for(int i=0; i<n-1; i++) {
            for(int j=0; j<m; j++) {
                freq[j][ss[i][j]-'a']--;
            }
        }

        string ans = "";

        for(int i=0; i<n; i++) {
            int cf[m][26] = {0};
            for(int j=0; j<m; j++) cf[j][os[i][j]-'a']++;
            bool ok = true;
            
            for(int k=0; k<m; k++) {
                for(int j=0; j<26; j++) if(cf[k][j] != freq[k][j]) ok = false;
            }

            if(ok) {
                ans = os[i];
                break;
            }
        }

        cout<<ans<<endl;
        fflush(stdout);
    }

    return 0;
}
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
#include <deque>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        string s; cin>>s;
        string ans = "YES";
        int n = s.size();

        for(int i=0; i<n; i++) {
            if(s[i] >= 'a' + n) {
                ans = "NO";
                break;
            }
        }

        if(ans == "YES") {
            deque<pair<char, int>> curr;
            char ch = 'a';
            while(curr.size() < n && ans == "YES") {
                int chi = 0;
                for(int i=0; i<n; i++) if(s[i] == ch) {
                    chi = i;
                    break;
                }
                if(ch == 'a') {
                    curr.push_back({'a', chi});
                }
                else {
                    if(chi + 1 == curr[0].second) {
                        curr.push_front({ch, chi});
                    }
                    else if(chi - 1 == curr[curr.size()-1].second) {
                        curr.push_back({ch, chi});
                    }
                    else {
                        ans = "NO";
                        break;
                    }
                }
                ch++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
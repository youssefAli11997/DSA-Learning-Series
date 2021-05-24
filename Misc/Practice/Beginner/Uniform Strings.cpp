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
        string s; cin>>s;
        int trans = 0;
        
        for(int i=1; i<s.size(); i++) {
            if(s[i] != s[i-1]) trans++;
        }

        if(s[s.size()-1] != s[0]) trans++;

        if(trans <= 2) cout<<"uniform\n";
        else cout<<"non-uniform\n";
    }

    return 0;
}
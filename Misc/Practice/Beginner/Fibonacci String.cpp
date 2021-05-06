// enjoyable problem!

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int freq[26] = {0};
        string s; cin>>s;

        for(int i=0; i<s.size(); i++) freq[s[i]-'a']++;
        vector<int> c;
        
        for(int i=0; i<26; i++) if(freq[i]) c.push_back(freq[i]);
        sort(c.begin(), c.end());

        string ans = "Dynamic";

        for(int i=2; i<c.size(); i++) {
            if(c[i] != c[i-1] + c[i-2]) {
                if(i == 3 && c[i] == c[2] + c[0]) {
                    continue;
                }
                ans = "Not";
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
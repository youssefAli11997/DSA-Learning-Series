#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s,w,canRead; cin>>s;
    int n; bool knows[26] = {0}; cin>>n;

    for(int i=0; i<s.size(); i++)
        knows[s[i]-'a'] = true;

    for(int i=0; i<n; i++) {
        cin>>w;
        canRead = "Yes";
        for(int j=0; j<w.size(); j++) {
            if(!knows[w[j]-'a']) canRead = "No";
        }
        cout<<canRead<<endl;
    }

    return 0;
}
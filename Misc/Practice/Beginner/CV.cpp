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
        int n; string s;
        cin>>n>>s;
        int cnt = 0;
        string vowels = "aeiou";

        for(int i=0; i<n-1; i++) {
            if(vowels.find(s[i]) == string::npos && vowels.find(s[i+1]) != string::npos)
                cnt++;
        }

        cout<<cnt<<'\n';
    }

    return 0;
}
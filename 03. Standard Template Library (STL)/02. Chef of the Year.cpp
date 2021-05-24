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

string getMaxKey(map<string, int> myMap) {
    int maxValue = 0;
    string maxKey = "";

    for(auto myPair : myMap) {
        if((myPair.second == maxValue && myPair.first < maxKey)
        || (myPair.second > maxValue)) {
            maxValue = myPair.second;
            maxKey = myPair.first;
        }
    }

    return maxKey;
}

int main() {
    int n,m; cin>>n>>m;
    map<string, string> chefsCountries;
    map<string, int> chefVotes;
    map<string, int> countryVotes;

    for(int i=0; i<n; i++) {
        string name, country; cin>>name>>country;
        chefsCountries[name] = country;
    }

    for(int i=0; i<m; i++) {
        string name; cin>>name;
        chefVotes[name]++;
        countryVotes[chefsCountries[name]]++;
    }

    cout<<getMaxKey(countryVotes)<<endl;
    cout<<getMaxKey(chefVotes)<<endl;

    return 0;
}
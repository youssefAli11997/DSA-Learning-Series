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
    string s; cin>>s;
    char w = 'a';
    int steps = 0;
 
    for(int i=0; i<s.size(); i++) {
        int clockwise = s[i] - w;
        if(clockwise < 0) clockwise += 26;
        int counter = w - s[i];
        if(counter < 0) counter += 26;
        steps += min(clockwise, counter);
        w = s[i];
    }
 
    cout<<steps<<endl;
 
    return 0;
}
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
    int n, distr = 0; long long x; cin>>n>>x;
    char sign; int d;

    for(int i=0; i<n; i++) {
        cin>>sign>>d;
        if(sign == '+') x += d;
        else if(x >= d) x -= d;
        else distr++;
    }

    cout<<x<<" "<<distr<<endl;

    return 0;
}
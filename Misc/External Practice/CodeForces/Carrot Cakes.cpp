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
    int n,t,k,d; cin>>n>>t>>k>>d;

    // one oven case
    int time1 = ceil(1.0 * n / k) * t;

    // two ovens case
    int timeline = 0;
    int finishTime1 = t, finishTime2 = 0;
    while(n > 0) {
        if(timeline > 0) if(timeline == finishTime1) {
            n -= k;
            if(n <= 0) break;
            finishTime1 = timeline + t;
        }

        if(timeline > 0) if(timeline == finishTime2) {
            n -= k;
            if(n <= 0) break;
            finishTime2 = timeline + t;
        }

        if(timeline == d) {
            finishTime2 = timeline + t;
        }

        timeline++;
    }

    if(time1 <= timeline) cout<<"NO\n";
    else cout<<"YES\n";

    return 0;
}
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

bool allEqual(long long a[], int n) {
    for(int i=1; i<n; i++) {
        if(a[i] != a[i-1]) return false;
    }
    return true;
}

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        long long a[n];

        for(int i=0; i<n; i++) cin>>a[i];

        int sum = 0;
        sort(a, a+n);

        for(int i=0; i<n; i++) sum += a[i];
        

        cout<<sum - n * a[0]<<endl;
    }

    return 0;
}
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

int digits_sum(int n) {
    int sum = 0;

    while(n) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int a[n], mx = 0;

        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                mx = max(mx, digits_sum(a[i] * a[j]));
            }
        }

        cout<<mx<<endl;
    }

    return 0;
}
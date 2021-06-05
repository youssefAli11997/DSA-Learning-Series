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
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    long long steps = 0;

    for(int i=1; i<n; i++) {
        if(a[i] < a[i-1]) {
            steps += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }
    
    cout<<steps<<endl;

    return 0;
}
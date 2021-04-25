#include <iostream>
#include <stack>

#define MOD 1000000007

using namespace std;

int main() {
    int n,k; cin>>n>>k;
    stack<int> s;
    int a[n], fear = 1;

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=n-1; i>=0; i--) {
        while(!s.empty() && a[s.top()] >= a[i]) {
            s.pop();
        }
        if(!s.empty()) {
            fear = (1ll * fear * (s.top() - i + 1)) % MOD;
        }
        s.push(i);
    }

    cout<<fear % MOD<<endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        string num; cin>>num;
        int sum = 0, n = num.size();

        for(int i=0; i<n; i++) {
            sum += num[i] - '0';
        }

        if(sum == 1 || sum == n - 1) cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
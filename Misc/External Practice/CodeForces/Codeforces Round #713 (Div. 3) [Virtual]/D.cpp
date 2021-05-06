#include <iostream>
#include <algorithm>

using namespace std;

int a[200005], n;

int find_x(long long sum) {
    int x_index = -1; long long sum_plus_x = 0;

    for(int i=0; i<n+1; i++) {
        sum_plus_x += a[i];
    }

    for(int i=0; i<n+1; i++) {
        if(sum_plus_x - a[i] == sum) {
            x_index = i;
            break;
        }
    }

    return x_index;
}

int main() {
    int t; cin>>t;

    while(t--) {
        cin>>n;

        for(int i=0; i<n+2; i++) cin>>a[i];

        sort(a, a+n+2);

        int x_index = find_x(a[n+1]); // assuming the sum is the last element

        if(x_index == -1) {
            // x is potentially the last element, but let's check first
            long long sum_n = 0;
            for(int i=0; i<n; i++) sum_n += a[i];
            if(sum_n == a[n]) {
                x_index = n+1;
                for(int i=0; i<n; i++) {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else {
                cout<<"-1\n";
            }
        } 
        else {
            for(int i=0; i<n+1; i++) {
                if(i == x_index) continue;
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
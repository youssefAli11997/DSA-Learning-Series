#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n; cin>>n;
    int arr[n];
    long long mx = 0;

    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr+n);

    for(int i=0; i<n; i++) {
        mx = max(mx, 1ll * arr[i] * (n-i));
    }

    cout<<mx<<endl;

    return 0;
}
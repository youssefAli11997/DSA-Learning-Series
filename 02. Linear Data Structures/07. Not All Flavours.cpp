#include <iostream>
#include <map>

using namespace std;

int main() {
    int t; cin>>t;
    map<int, int> existingFlavours;

    while(t--) {
        int n, k; cin>>n>>k;
        int a[n], start = 0, mx = 0;
        existingFlavours.clear();

        for(int i=0; i<n; i++) cin>>a[i];

        for(int i=0; i<n; i++) {
            if(existingFlavours.size() == k - 1 && !existingFlavours.count(a[i])) {
                mx = max(mx, i-start);
                //cout<<start<<" "<<i<<endl;
                while(existingFlavours.size() == k - 1 && start < i) {
                    //cout<<"-> "<<start<<endl;
                    existingFlavours[a[start]]--;
                    if(existingFlavours[a[start]] == 0) existingFlavours.erase(a[start]);
                    start++;
                }
            }
            existingFlavours[a[i]]++;
        }

        if(existingFlavours.size() < k)
            mx = max(mx, n-start);

        cout<<mx<<endl;
    }

    return 0;
}
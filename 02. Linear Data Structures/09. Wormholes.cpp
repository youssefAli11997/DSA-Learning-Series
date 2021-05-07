#include <iostream>
#include <cmath>
#include <algorithm>
#include <utility>

using namespace std;

int v[1000004], w[1000004], n,x,y;

int binary_search_for_v(int key, int l, int h) {
    int ans = -1;
    while(l <= h) {
        int mid = (l+h) / 2;
        if(v[mid] <= key) {
            ans = v[mid];
            l = mid+1;
        }
        else h = mid-1;
    }

    return ans;
}

int binary_search_for_w(int key, int l, int h) {
    int ans = -1;
    while(l <= h) {
        int mid = (l+h) / 2;
        if(w[mid] >= key) {
            ans = w[mid];
            h = mid-1;
        }
        else l = mid+1;
    }
    
    return ans;
}

int find_closest(int key, char type) {
    return type == 'v'? binary_search_for_v(key, 0, x-1) : binary_search_for_w(key, 0, y-1);
}

int main() {
    cin>>n>>x>>y;
    pair<int,int> contests[n];

    for(int i=0; i<n; i++) {
        int a,b; cin>>a>>b;
        contests[i] = {a,b};
    }

    for(int i=0; i<x; i++) cin>>v[i];
    for(int i=0; i<y; i++) cin>>w[i];

    sort(v, v+x);
    sort(w, w+y);

    int mn = 1e7;

    for(int i=0; i<n; i++) {
        int closestV = find_closest(contests[i].first, 'v'); // first v that's <= constests[i].first
        int closestW = find_closest(contests[i].second, 'w'); // first w that's >= constests[i].second
        if(closestV == -1 || closestW == -1) continue;
        mn = min(mn, closestW - closestV + 1);
    }

    cout<<mn<<endl;

    return 0;
}
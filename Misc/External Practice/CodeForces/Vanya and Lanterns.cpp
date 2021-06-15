#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <utility>
#include <stack>
#include <queue>
 
#define EPSILON 0.000000001
 
using namespace std;
 
int n,l,a[1002];
 
bool isAllCovered(double d) {
    double max_covered_point = 0;
    for(int i=0; i<n; i++) {
        if(a[i] - d <= max_covered_point) {
            max_covered_point = a[i] + d;
        }
        else return false;
    }
 
    return max_covered_point >= l;
}
 
double binary_search_on_d(double low, double high) {
    while(high - low > EPSILON) {
        double d = (low + high) / 2;        
 
        if(isAllCovered(d)) {
            high = d;
        }
        else {
            low = d + EPSILON;
        }
    }
 
    return low;
}
 
int main() {
    scanf("%d%d", &n, &l);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    printf("%.10f", binary_search_on_d(0, l));
    return 0;
}
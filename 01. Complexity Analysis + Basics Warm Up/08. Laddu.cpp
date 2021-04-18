#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n, laddus = 0; string origin; cin>>n>>origin;

        for(int i=0; i<n; i++) {
            string act; cin>>act;

            if(act == "CONTEST_WON") {
                int rank; cin>>rank;
                laddus += 300 + max(0, 20 - rank);
            }
            else if(act == "TOP_CONTRIBUTOR") {
                laddus += 300;
            }
            else if(act == "BUG_FOUND") {
                int severity; cin>>severity;
                laddus += severity;
            }
            else if(act == "CONTEST_HOSTED") {
                laddus += 50;
            }
        }
        cout<<laddus / (origin == "INDIAN" ? 200 : 400)<<endl;
    }

    return 0;
}
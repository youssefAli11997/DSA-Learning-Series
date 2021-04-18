#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    string s, s1, s2; cin>>s;
    for(int i=0; i<s.size(); i++){
      if(i == s.size()/2 && s.size()%2==1) continue;
      if(i < s.size()/2) s1 += s[i];
      else s2 += s[i];
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout<<(s1 == s2? "YES":"NO")<<endl;

  }
}
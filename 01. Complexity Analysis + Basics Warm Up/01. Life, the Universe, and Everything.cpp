#include <iostream>

using namespace std;

int main() {
  int n; bool stop = false;
  while(cin>>n){
    if(n == 42) stop = true;
    if(!stop) cout<<n<<endl;
  }
}
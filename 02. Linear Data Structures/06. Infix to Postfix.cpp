#include <iostream>
#include <stack>
#include <map>

using namespace std;

int main() {
    int t; cin>>t;

    map<char, int> priority;
    priority['('] = 0;
    priority['+'] = priority['-'] = 1;
    priority['*'] = priority['/'] = 2;
    priority['^'] = 3;

    while(t--) {
        int n; cin>>n;
        string s, prefix = ""; cin>>s;
        stack<char> operands;

        for(int i=0; i<n; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') prefix += s[i];
            else if(s[i] == '(') operands.push(s[i]);
            else if(s[i] == ')') {
                while(!operands.empty() && operands.top() != '(') {
                    prefix += operands.top();
                    operands.pop();
                }
                operands.pop();
            }
            else {
                while(!operands.empty() && priority[operands.top()] >= priority[s[i]]) {
                    prefix += operands.top();
                    operands.pop();
                }
                operands.push(s[i]);
            }
        }

        while(!operands.empty()) {
            prefix += operands.top();
            operands.pop();
        }

        cout<<prefix<<endl;
    }

    return 0;
}
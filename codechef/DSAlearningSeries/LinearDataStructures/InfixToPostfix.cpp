#include <bits/stdc++.h>
 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
 
#define endl "\n"
 
using namespace std;
 
int main() {
	fastio;
	int t;
    cin>>t;
    while (t--) {
        int n; 
        cin>>n;
        string s;
        cin>>s;
        stack <int> stk;
        unordered_map <char, int> hashmap;
        hashmap['+'] = 1;
        hashmap['-'] = 1;
        hashmap['*'] = 2;
        hashmap['/'] = 2;
        hashmap['^'] = 3;
        hashmap['('] = 0;
        hashmap[')'] = 0; 
        string answer = "";
        for (int i=0;i<n;i++) {
            if (hashmap.find(s[i])==hashmap.end()) {
                answer = answer + s[i];
            } else {
                if (s[i]=='(') {
                    stk.push('(');
                } else if (s[i]=='+' || s[i]=='-') {
                    if (stk.size()>0 && hashmap[stk.top()]>=1) {
                        while (stk.size()>0 && hashmap[stk.top()]>=1) {
                            answer += stk.top();
                            stk.pop();
                        }
                    }
                    stk.push(s[i]);
                } else if (s[i]=='*' || s[i]=='/') {
                    if (stk.size()>0 && hashmap[stk.top()]>=2) {
                        while (stk.size()>0 && hashmap[stk.top()]>=2) {
                            answer += stk.top();
                            stk.pop();
                        }
                    } 
                    stk.push(s[i]);
                } else if (s[i]=='^') {
                    while (stk.size()>0 && hashmap[stk.top()]>=3) {
                            answer += stk.top();
                            stk.pop();
                    }
                    stk.push(s[i]);
                } else {
                    while (stk.top()!='(') {
                        answer += stk.top();
                        stk.pop();
                    }
                    stk.pop();
                }
            }
        }
        while (stk.size()>0) {
            answer += stk.top();
            stk.pop();
        }
        cout<<answer<<endl;
    }
	return 0;
}

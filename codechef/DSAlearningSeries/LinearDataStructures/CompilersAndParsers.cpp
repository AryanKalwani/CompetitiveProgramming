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
        string s;
        cin>>s;
        int answer = 0, count = 0, stack = 0;
        for (int i=0;i<s.size();i++) {
            if (s[i]=='<') {
                stack++;
            }
            else {
                stack--;
            }
            if (stack==0) {
                answer = i+1;
            }
            else if (stack<0) {
                break;
            }        
        }
        cout<<answer<<endl;
    }
	return 0;
}

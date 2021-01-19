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
        int i = s.size()-1;
        while (s[i]=='0') i--;
        for (i;i>=0;i--) cout<<s[i];
        cout<<endl;
    }
	return 0;
}

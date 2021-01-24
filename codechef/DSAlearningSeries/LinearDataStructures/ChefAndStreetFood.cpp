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
        int n, s, v, p;
        long long ans = 0; 
        cin>>n;
        while (n--) {
            cin>>s>>p>>v;
            ans = max(ans, (p/(s+1))*v);
        }
        cout<<ans<<endl;
    }  
	return 0;
}

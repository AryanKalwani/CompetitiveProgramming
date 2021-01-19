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
        int five = 1;
        while (five<=n) {
            five = five*5;
        }
        five = five/5;
        int ans = 0;
        while (five>1) {
            ans += (n/five);
            five = five/5;
        }
        cout<<ans<<endl;
    }  
	return 0;
}

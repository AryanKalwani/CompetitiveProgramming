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
    while (t--)
    {
        int n, k, d, util;
        cin>>n>>k>>d;
        long long total = 0;
        for (int i=0;i<n;i++) {
            cin>>util;
            total += util;
        }
        int ans = total/k;
        cout<<min(ans, d)<<endl;
    }
	return 0;
}

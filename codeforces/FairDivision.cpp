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
        int util, totalOne = 0, totalTwo = 0;
        for (int i=0;i<n;i++) {
            cin>>util;
            if (util==1) totalOne += 1;
            else totalTwo += 1;
        }
        if (totalTwo%2!=0) {
            if (totalOne>1) {
                totalOne -= 2;
                totalTwo += 1;
            }
        }
        if (totalOne%2==0 && totalTwo%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}

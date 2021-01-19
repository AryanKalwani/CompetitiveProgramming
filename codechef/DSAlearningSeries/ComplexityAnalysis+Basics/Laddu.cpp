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
        string nationality;
        cin>>n>>nationality;
        string util;
        int extra;
        int ans = 0;
        while (n--) {
            cin>>util;
            if (util=="CONTEST_WON") {
                cin>>extra;
                if (extra>20) {
                    ans += 300;
                } else {
                    ans += 300+(20-extra);
                }
            } else if (util=="TOP_CONTRIBUTOR") {
                ans += 300;
            } else if (util=="BUG_FOUND") {
                cin>>extra;
                ans += extra;
            } else {
                ans += 50;
            }
        }
        if (nationality=="INDIAN") {
            cout<<ans/200<<endl;
        } else {
            cout<<ans/400<<endl;
        }
    }  
	return 0;
}

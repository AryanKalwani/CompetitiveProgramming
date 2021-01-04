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
        int w, h, n;
        cin>>w>>h>>n;
        int numb = 1;
        while ((w%2)==0 || (h%2)==0) {
            if (numb==n) break;
            if (w%2==0) {
                numb *= 2;
                w = w/2;
            }
            else if (h%2==0) {
                numb *= 2;
                h = h/2;
            }
        }
        if (numb>=n) {
            cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
    }
	return 0;
}

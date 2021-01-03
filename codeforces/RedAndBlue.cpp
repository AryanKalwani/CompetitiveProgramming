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
        int n, m;
        cin>>n;
        int utilPrev, utilCur;
        cin>>utilPrev;
        int maxiOne = max(0, utilPrev);
        for (int i=1;i<n;i++) {
            cin>>utilCur;
            utilCur += utilPrev;
            utilPrev = utilCur;
            maxiOne = max(maxiOne, utilCur);   
        }
        cin>>m;
        vector <int> sec(m, 0);
        cin>>utilPrev;
        int maxiTwo = max(0, utilPrev);
        for (int i=1;i<m;i++) {
            cin>>utilCur;
            utilCur += utilPrev;
            utilPrev = utilCur;
            maxiTwo = max(maxiTwo, utilCur);
        }
        cout<<maxiOne+maxiTwo<<endl;
    }
	return 0;
}

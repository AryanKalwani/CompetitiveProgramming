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
        int answer = 1, prev, cur;
        cin>>prev;
        for (int j=1;j<n;j++) {
            cin>>cur;
            if (prev>=cur) {
                answer++;
            }
            prev = min(prev,cur);
        }
        cout<<answer<<endl;
    }  
	return 0;
}

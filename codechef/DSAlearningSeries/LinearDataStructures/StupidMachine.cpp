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
        vector <int> arr(n, 0);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        long long ans = 0, min = arr[0];
        for (int i=0;i<n;i++) {
            if (arr[i]<min) {
                min = arr[i];
            } else {
                arr[i] = min;
            }
            ans += arr[i];
        }
        cout<<ans<<endl;
    }
	return 0;
}

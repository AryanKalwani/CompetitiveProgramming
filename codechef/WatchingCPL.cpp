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
        int n, k;
        cin>>n>>k;
        vector <int> arr(n, 0);
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int curHeight = 0, numBlocks = 0;
        
        int low, high, toFind;
        while (1) {
            while (low<=high) {
                if (curHeight>=k) {
                    numBlocks++;
                    break;
                }
                toFind = k-curHeight;
                int mid = (low+high)/2;
                if (arr[mid]==toFind || (arr[mid]>toFind && arr[mid-1]<toFind)) {
                    curHeight += arr[mid];
                    arr.erase(mid);
                } else if (arr[mid]<toFind) {
                    low = mid+1;
                } else high = mid-1;
            }
        }
    }
	return 0;
}

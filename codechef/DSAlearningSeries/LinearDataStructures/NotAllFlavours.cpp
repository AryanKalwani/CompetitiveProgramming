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
        int arr[n];
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        unordered_map <int, int> hashmap;
        int index = 0, left = 0, count = 0, answer = 0;
        while (index<n) {
            if (hashmap.find(arr[index])==hashmap.end()) {
                hashmap[arr[index]] = 1;
            } else hashmap[arr[index]]++;
            count++;
            if (hashmap.size()==k) {
                while (hashmap.size()==k) {
                    --hashmap[arr[left]];
                    --count;
                    if (hashmap[arr[left]]==0) {
                        hashmap.erase(arr[left]);
                    }
                    ++left;
                }
            }
            index++;
            answer = max(answer, count);
        }
        cout<<answer<<endl;
    }
	return 0;
}

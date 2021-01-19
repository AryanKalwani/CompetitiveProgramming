#include <bits/stdc++.h>
 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
 
#define endl "\n"
 
using namespace std;
 
int main() {
	fastio;
	long long t;
    cin>>t;
    vector <long long> arr(t, 0);
    for (int i=0;i<t;i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end(), greater<>());
    long long answer = 0;
    for (int i=0;i<t;i++) {
        answer = max(answer, arr[i]*(i+1));
    }
    cout<<answer<<endl;    
	return 0;
}

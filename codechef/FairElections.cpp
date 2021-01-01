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
        int n, m, util;
        cin>>n>>m;
        priority_queue <int> pq2;
        priority_queue <int, vector <int>, greater <int>> pq1;
        long long total1 = 0, total2 = 0;
        for (int i=0;i<n;i++) {
            cin>>util;
            pq1.push(util);
            total1 += util;
        }
        for (int i=0;i<m;i++) {
            cin>>util;
            pq2.push(util);
            total2 += util;
        }
        int answer = 0, a1, a2;
        while (total2>=total1) {
            a1 = pq1.top();
            pq1.pop();
            a2 = pq2.top();
            pq2.pop();
            if (a1>=a2) break;
            total1 += a2-a1;
            total2 += a1-a2;
            pq1.push(a2);
            pq2.push(a1);
            answer++;
        }
        if (total1>total2) {
            cout<<answer<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }
	return 0;
}

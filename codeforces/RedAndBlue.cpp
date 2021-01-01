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
        int n, maxi = 0;
        cin>>n;
        vector <int> first(n,0);
        for (int i=0;i<n;i++) {
            cin>>first[i];
        }
        int m;
        cin>>m;
        vector <int> sec(m,0);
        for ( int i=0;i<m;i++) {
            cin>>sec[i];
        }
        int index1 = 0, index2 = 0;
        vector <int> util;
        while (index1<n && index2<m) {
            if (first[index1]>0) {
                if (first[index1]>sec[index2]) {
                    util.push_back(first[index1]);
                    index1++;
                } else {
                    util.push_back(sec[index2]);
                    index2++;
                }
            } else if (sec[index2]>0) {
                util.push_back(sec[index2]);
                index2++;
            }
            else {
                util.push_back(first[index1]);
                index1++;
            }
            if (util.size()>1) {
                util[util.size()-1] += util[util.size()-2];
                maxi = max(maxi, util[util.size()-1]);
            }
        } 
        while (index1<n) {
            util.push_back(first[index1]);
            index1++;
            if (util.size()>1) {
                util[util.size()-1] += util[util.size()-2];
                maxi = max(maxi, util[util.size()-1]);
            }
        }
        while (index2<m) {
            util.push_back(sec[index2]);
            index2++;
            if (util.size()>1) {
                util[util.size()-1] += util[util.size()-2];
                maxi = max(maxi, util[util.size()-1]);
            }
        }
        cout<<maxi<<endl;
    }
	return 0;
}

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
        string s;
        cin>>s;
        int isOdd = 0, resultShown = 0;
        if (s.size()%2==1) isOdd = 1;
        unordered_map <char, int> hash1;
        for (int i=0;i<s.size()/2;i++) {
            if (hash1.find(s[i])==hash1.end()) {
                hash1[s[i]] = 1;
            } else hash1[s[i]]++;
        }
        int i;
        if (isOdd) {
            i = (s.size()/2) + 1;
        } else i = s.size()/2;
        for (i;i<s.size();i++) {
            if (hash1.find(s[i])==hash1.end()) {
                cout<<"NO"<<endl;
                resultShown = 1;
                break;
            } else hash1[s[i]]--;
        }
        if (resultShown) continue;
        for (auto x: hash1) {
            if (x.second!=0) {
                cout<<"NO"<<endl;
                resultShown = 1;
                break;
            }
        }
        if (resultShown) continue;
        cout<<"YES"<<endl;
    }
	return 0;
}

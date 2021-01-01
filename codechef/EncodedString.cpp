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
    char x;
    vector <char> alphas;
    for (x='a';x<='p';x++) {
        alphas.push_back(x);
    }
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string answer = "";
        for (int i=0;i<n;i+=4) {
            int first, last, mid;
            if (s[i]=='0') {
                first = 0;
                last = 7;
            } else {
                first = 8;
                last = 15;
            }
            int m=1;
            while (m<4) {
                mid = (first+last)/2;
                if (s[i+m]=='0') {
                    last = mid;
                } else {
                    first = mid+1;
                }
                m++;
            }
            answer += alphas[first];
        }
        cout<<answer<<endl;
    }
	return 0;
}

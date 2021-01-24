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
        string s;
        cin>>s;
        int score1 = 0, score2 = 0, shots1 = 0, shots2 = 0;
        int i = 0, run = 1;
        while (i<s.size() && run) {
            if (i%2==0) {
                score1 += s[i] - 48;
                shots1++;
            } else {
                score2 += s[i] - 48;
                shots2++;
            }
            if ((score1-score2)>(n-shots2)) { 
                cout<<i+1<<endl;
                run = 0;
            }
            else if ((score2-score1)>(n-shots1)) {
                cout<<i+1<<endl;
                run = 0;
            }
            else if (i==s.size()-1 && run) {
                cout<<i+1<<endl;
            }
            i++;
        }
    }
	return 0;
}

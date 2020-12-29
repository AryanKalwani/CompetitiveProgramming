#include <bits/stdc++.h>
 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
 
#define endl "\n"
 
using namespace std;
 
int main() {
	fastio;
	int n;
	cin>>n;
	while (n--) {
		string s;
		cin>>s;
		if (s[0]==')' || s[s.size()-1]=='(' || s.size()%2==1) {
			cout<<"NO"<<endl;
			continue;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
	return 0;
}

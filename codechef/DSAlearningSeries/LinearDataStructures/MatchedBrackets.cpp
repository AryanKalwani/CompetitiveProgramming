#include <bits/stdc++.h>
 
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
 
#define endl "\n"
 
using namespace std;
 
int main() {
	fastio;
	int t, depth = 0, utilDepth = 0, depthFirst, utilDepthFirst, stack=0, u;
    int maxFirst, utilMaxFirst, maxLength = 0, utilMaxLength = 0;
    cin>>t;
    for (int i=0;i<t;i++) {
        cin>>u;
        if (u==1) {
            utilDepthFirst = i;
            if (utilMaxLength==0) utilMaxFirst = i;
            utilMaxLength++;
            utilDepth++;
            stack++;
        }
        else {
            stack--;
            utilMaxLength++;
            if (utilMaxLength>maxLength) {
                maxFirst = utilMaxFirst;
                maxLength = utilMaxLength;
            }
            if (stack==0) {
                utilDepth = 0;
                utilMaxLength = 0;
            } else {
                utilDepth--;
            }
        }
        if (utilDepth>depth) {
            depthFirst = utilDepthFirst;
            depth = utilDepth;
        }
    }
    cout<<depth<<" "<<depthFirst+1<<" ";
    cout<<maxLength<<" "<<maxFirst+1<<endl;
	return 0;
}

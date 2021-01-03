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
        int n, k, x, y;
        cin>>n>>k>>x>>y;
        int x_speed = 1;
        int y_speed = 1;
        int endP = 0;
        while (k) {
            if (x==n && y==n) {
                endP = 1;
                break;
            }
            if (x==0 && y==0) {
                endP = 1;
                break;
            }
            if (x==n && y==0) {
                endP = 1;
                break;
            }
            if (x==0 && y==n) {
                endP = 1;
                break;
            }
            if (x==n) {
                k--;
                x_speed = -1;
            } 
            else if (x==0 && x_speed==-1) {
                k--;
                x_speed = 1;
            }
            if (y==n) {
                k--;
                y_speed = -1;
            }
            else if (y==0 && y_speed==-1) {
                k--;
                y_speed = 1;
            }
            x += x_speed;
            y += y_speed;
        }
        if (endP==0) cout<<x-x_speed<<" "<<y-y_speed<<endl;
        else cout<<x<<" "<<y<<endl;
    }
	return 0;
}

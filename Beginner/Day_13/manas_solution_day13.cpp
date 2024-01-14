#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        double l,r,m;
        cin>>l>>r>>m;
        int x = (int)ceil(m/l);
        int y = (int)floor(m/r);
        cout<<x+y<<endl;
    }
}

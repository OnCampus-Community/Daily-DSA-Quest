#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        m = m - k;
        if(m>=n)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}

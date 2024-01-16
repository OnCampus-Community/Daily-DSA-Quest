#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int sum = 0;
        for(int i = 0;i<n-1;i++)
        {
            int a;
            cin>>a;
            sum += a;
        }
        x = x*n;
        x = x - sum;
        if(x<=0)
        {
            cout<<"0\n";
        }
        else
        cout<<x<<endl;
    }
}

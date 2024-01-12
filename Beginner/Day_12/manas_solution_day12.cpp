#include <bits/stdc++.h>
#define rep(i,a,b) for(int  i = 0;i<b;i++)
#define I int
using namespace std;

int main() {
	// your code goes here
    I t;
    cin>>t;
    I n;
    while(t--)
    {
        cin>>n;
        if(n==1)
        cout<<"1 1\n";
        else{
            if(n%2==0)
            {
                cout<<n/2<<" "<<n<<endl;
            }
            else{
                cout<<(n+1)/2<<" "<<n<<endl;
            }
        }
    }
}

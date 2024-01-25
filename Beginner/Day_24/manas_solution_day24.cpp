#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	   int a,b;
	   cin>>a>>b;
	   int mi = min(a,b);
	   int ma = max(a,b);
	   if(a==b)
	   yes;
	   else
	   {
	       while(mi<ma)
	       {
	           mi = mi* 2;
	       }
	       if(mi==ma)
	       yes;
	       else
	       no;
	   }
	}
    return 0;
}

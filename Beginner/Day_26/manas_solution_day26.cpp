#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	   double p,l;
	   cin>>p>>l;
	   double ans = (l/p)*100;
	   if(ans>=75)
	   yes;
	   else
	   no;
	}
    return 0;
}

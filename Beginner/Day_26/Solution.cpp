#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int l, p;
	    cin >> p >> l;
	     l = (l*100) / p;
	     if(l >= 75){
	         cout << "YES" << endl;
	     }
	     else{
	         cout << "NO" << endl;
	     }
	}

}

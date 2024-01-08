#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> res;
	    int A[n];
	    map<int, int> hashh;
	    for(int i=0; i<n; i++){
	        cin >> A[i];
	        hashh[A[i]]++;
	    }
	    for(auto it:hashh){
	        if(it.second %2 != 0){
	            cout << it.first << endl;
	            break;
	        }
	    }
	}
	return 0;
}

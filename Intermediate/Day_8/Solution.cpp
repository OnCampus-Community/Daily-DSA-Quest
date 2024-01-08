#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    map<int, int> hashh;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	        hashh[arr[i]]++;
	    }
	    int count = 0;
	    int check = 0;
	    for(auto it:hashh){
	        if(it.second > count){
	            check = 1;
	            count = it.second;
	        }
	        else if(it.second == count){
	            check = 0;
	        }
	    }
	    if(check == 0){
	        cout << "NO" << endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	    
	}
	return 0;
}

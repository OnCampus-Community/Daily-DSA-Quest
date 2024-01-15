#include <bits/stdc++.h> 
string maximumDifference(int n, vector<int>& arr)
{
	// Write your code here.
	int maxxi = INT_MIN;
	int minni = INT_MAX;
	for(int i=0; i<n; i++){
		if(arr[i] > maxxi){
			maxxi = arr[i];
		}
		if(arr[i] < minni){
			minni = arr[i];
		}
	}
	if((maxxi-minni)%2 == 0){
		return "EVEN";
	}
	return "ODD";
}
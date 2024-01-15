#include <bits/stdc++.h> 
int wordRectangle(vector<string> &words)
{
	// Write your code here.
	int ans = 0;
	
	for(int i=0; i<words.size(); i++){
		int maxi = 0;
		int j = 0;
		int check = 0;
		char checker = words[i][0];
		int x = 1;
		while(j < words[i].size()){
			x = 1;
			if(words[i][j] != checker){
				check = 1;
				break;
			}
			while(j+x < words[i].size() && words[i][j] == words[i][j+x]){
				x++;
			}
			if(x > maxi){
				maxi = x;
			}
			j+=x;
		}
		if(maxi > ans && check == 0){
			ans = maxi;
		}
	}
	return ans*ans;
}
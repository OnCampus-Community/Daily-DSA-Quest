#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> res;
	int i = 0;
	sort(arr.begin(), arr.end());
	int x = 1;
    int n = arr.size();
    int y;
	if(n == 1){
		res.push_back(arr[0]);
	}
    else if(n == 2){
        res.push_back(arr[0]);
        res.push_back(arr[1]);
    }
	else{
		while(i<n){
			if(arr[i] == arr[i+1]){
				x = 1;
				while(arr[i] == arr[i+x]){
					x++;
				}
                y = n/3;
				if(x > y){
					res.push_back(arr[i]); 
				}
				i += x;
			}
			else{
				i++;
			}
		}
	}

	return res;

}
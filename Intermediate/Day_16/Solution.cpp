#include <bits/stdc++.h> 
vector<int> leastGreaterElement(vector<int> &arr) 
{
    //    Write your code here
    vector<int> res;
    int n = arr.size();
    for(int i=0; i<n; i++){
        int ans = INT_MAX;
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i] && arr[j] < ans){
                ans = arr[j];
            }
        }
        if(ans == INT_MAX){
            res.push_back(-1);
        }
        else{
            res.push_back(ans);
        }
    }
    return res;
}
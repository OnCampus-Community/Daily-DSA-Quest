#include <bits/stdc++.h> 
int minSubarraySum(int arr[], int n, int k) 
{
    // Write your code here 
    int ans = INT_MAX;
    int sum = 0;
    int index = 0;
    for(int i=0; i<k; i++){
        sum += arr[i];
    }
    if(sum < ans){
        ans = sum;
    }
    for(int i=k; i<n; i++){
        sum -= arr[index];
        index++;
        sum += arr[i];
        if(sum < ans){
            ans = sum;
        }
    }
    return ans;
}
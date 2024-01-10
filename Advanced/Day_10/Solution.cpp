#include <bits/stdc++.h> 
vector<int> specialSubarray(int n, vector<int> &arr)
{
    vector<int>ans;
    unordered_map<int,int>m,startIndex,endIndex;
    int maxFreq=0,start=0,end=INT_MAX;
    for(int i=0;i<n;i++) {
        m[arr[i]]++;
        if(startIndex.find(arr[i])==startIndex.end()) {
            startIndex[arr[i]]=i;
        }
        endIndex[arr[i]]=i;
        if(maxFreq<m[arr[i]]) {
            maxFreq=m[arr[i]];
        }
    }
    for(int i=0;i<n;i++) {
        if(m[arr[i]]==maxFreq) {
            if(endIndex[arr[i]]-startIndex[arr[i]]<end-start) {
                end=endIndex[arr[i]];
                start=startIndex[arr[i]];
            }
        }
    }
    for(int i=start;i<=end;i++) {
        ans.push_back(arr[i]);
    }
    return ans;
}
#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int x = k;
    vector<int> index(2);
    index[0] = -1;
    index[1] = -1;
    
    int ind;
    int start = 0;
    int end = n-1;
    int mid;
    int check = 0;
    while(start <= end && check == 0){
        mid = (start + end) / 2;
        if(arr[mid] == x){
            ind = mid;
            check = 1;
        }
        else if(x > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if(check == 1){
        int low = ind;
            while(arr[low-1] == x){
                low--;
            }
        int high = ind;
        while(arr[high+1] == x){
            high++;
        }
        if(low == -1){
            low = 0;
        }
        if(high > n-1){
            high = n-1;
        }
        index[0] = low;
        index[1] = high;
    }
    pair<int, int> resu;
    resu.first = index[0];
    resu.second = index[1];
    
    return resu;
}
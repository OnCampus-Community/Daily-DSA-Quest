#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    int count = 0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            count++;
            if(count > 1){
                return false;
            }
            if(i==1 || arr[i-2] <= arr[i]){
                arr[i-1] = arr[i];
            }
            else{
                arr[i] = arr[i-1];
            }
        }
    }
    return true;
}
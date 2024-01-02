#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    //   Write your code here
    int count0=0,count1=0,count2=0;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    int i=0;
    while(count0--){
        arr[i]=0;
        i++;
    }
    while(count1--){
        arr[i]=1;
        i++;
    }
    while(count2--){
        arr[i]=2;
        i++;
    }
}
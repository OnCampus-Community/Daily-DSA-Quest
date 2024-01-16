#include <bits/stdc++.h> 
vector<int> leastGreaterElement(vector<int> &arr) 
{
    //    Write your code here
    vector<int> v;
    for(int i = 0;i<arr.size();i++)
    {   
        if(i == (arr.size()-1))
        {
            v.push_back(-1);
            break;
        }
        int min = 0 ;int c = 0;
        for(int j = i+1;j<arr.size();j++)
        {
            if (arr[j] > arr[i] && c==0) {
              min = arr[j];
              c = 1;
            }
            if( c==1 && arr[j]>arr[i] && arr[j]<min)
            {
                min = arr[j];  
            }
        }
        if(c==0)  min = -1;
        v.push_back(min);
    }
    return v;
}

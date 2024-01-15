#include <bits/stdc++.h> 

string maximumDifference(int n, vector<int>& arr)

{

    // Write your code here.

    sort(arr.begin(),arr.end());

    int d=arr[n-1]-arr[0];
    string s ;

    if(d%2==0)
     return "EVEN";

    else
     return "ODD";

    

}

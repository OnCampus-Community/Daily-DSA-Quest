#include <bits/stdc++.h> 
vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n) {
    // Write your code here.
    vector<vector<int>> v;
    vector<int> t;
    for(int i = 0;i<n;i++)
    {
        for(int j = n-1;j>=0;j--)
        {
            if(a[i][j]==1)
            t.push_back(0);
            else
            t.push_back(1);
        }
        v.push_back(t);
        t.clear();
    }
    return v;
}

#include <bits/stdc++.h> 
vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n) {
    // Write your code here.
    for(int i=0; i<n; i++){
        reverse(a[i].begin(), a[i].end());
        for(int j=0; j<n; j++){
            if(a[i][j] == 1){
                a[i][j] = 0;
            }
            else{
                a[i][j] = 1;
            }
        }
    }
    return a;
}
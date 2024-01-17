#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int top=0, left=0, bottom=n-1, right=m-1;

    while(top<bottom && left<right){
        int temp=mat[top+1][left];

        for(int i=left; i<=right; i++){
            swap(temp, mat[top][i]);
        }
        top++;

        for(int i=top; i<=bottom; i++){
            swap(temp, mat[i][right]);
        }
        right--;

        for(int i=right; i>=left; i--){
            swap(temp, mat[bottom][i]);
        }
        bottom--;
        
        for(int i=bottom; i>=top; i--){
            swap(temp, mat[i][left]);
        }
        left++;
    }
}
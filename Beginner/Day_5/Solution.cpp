#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	vector<vector<int>> mat1 = matrix;
	for(int i=0; i<mat1.size(); i++){
		for(int j=0; j<mat1[0].size(); j++){
			if(mat1[i][j] == 0){
				for(int k=0; k<matrix.size(); k++){
					matrix[k][j] = 0;
				}
				for(int k=0; k<matrix[0].size(); k++){
					matrix[i][k] = 0;
				}
			}
		}
	}
}
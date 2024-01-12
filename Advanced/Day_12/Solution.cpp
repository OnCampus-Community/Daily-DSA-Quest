#include <bits/stdc++.h> 
int countSpecialNumbers(int n)
{ 
    // Write your code here
    int count = 0;
    for(int i=1; i<=n; i++){
        string x = to_string(i);
        int flag = 0;
        for(int j=0; j<x.size(); j++){
            if(x[j] == '6' || x[j] == '7' || x[j] == '8' || x[j] == '9' || x[j] == '0'){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            count++;
        }
    }
    return count;
}
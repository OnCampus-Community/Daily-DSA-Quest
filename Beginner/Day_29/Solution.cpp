#include <bits/stdc++.h> 
bool isPossibleToSurvive(int n, int x, int d){
    // Write your code here
    if(n < x){
        return false;
    }
    else{
        int total = 0;
        total += n*d;
        total -= n*(d/7);
        if(total >= x*d){
            return true;
        }
        return false;
    }
}

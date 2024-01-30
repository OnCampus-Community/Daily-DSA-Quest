#include <bits/stdc++.h> 
bool isPossibleToSurvive(int n, int x, int d){
    // Write your code here
    x = x + d/7;
    if(x<=n)
    return true;
    return false;
}

#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    long long sum = 0;
    if(n%2 == 0){
        while(n>0){
            sum = n + sum;
            n = n-2;
        }
    }
    else{
        n = n-1;
        while(n>0){
            sum = sum + n;
            n = n-2;
        }
    }
    return sum;
}
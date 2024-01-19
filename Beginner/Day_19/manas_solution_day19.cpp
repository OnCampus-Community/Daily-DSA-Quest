#include <bits/stdc++.h> 
bool even(long long x)
{
    if(x%2==0)
    return true;
    return false;
}
long long evenSumTillN(int n) {
    // Write your code here.
    long long sun = 0;
    for(int i = 1 ;i<=n;i++)
    {
        if(even(i))
        sun += i;
    }
    return sun;
}

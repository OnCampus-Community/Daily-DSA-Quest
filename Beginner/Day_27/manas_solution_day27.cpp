#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector<int>v;
    for(int i = 1;x>0;i++)
    {
        int a = (3*i)+2;
        if(a%4!=0)
        {
            v.push_back(a);
            x--;
        }
    }
    return v;
}

#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    // Write your code here.
    vector<int> res;
    int i = 1;
    while(x--){
        int temp = (i*3)+2;
        if(temp % 4 == 0){
            x++;
        }
        else{
            res.push_back(temp);
        }
        i++;
    }
    return res;
}

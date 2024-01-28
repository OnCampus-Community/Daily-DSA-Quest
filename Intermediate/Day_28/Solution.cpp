#include <bits/stdc++.h>
string addBinaryString(string &a, string &b, int n, int m)
{
    int check = 0;
    string res;
    int i=n-1;
    int j=m-1;
    while(i>=0 && j>=0){
        if(a[i] == '0' && b[j] == '0'){
            if(check != 0){
                res.append("1");
                check = 0;
            }
            else{
                res.append("0");
            }
        }
        else if(a[i] == '1' && b[j] == '1'){
            if(check!=0){
                res.append("1");
            }
            else{
                res.append("0");
                check = 1;
            }
        }
        else{
            if(check!=0){
                res.append("0");
            }
            else{
                res.append("1");
            }
        }
        i--;
        j--;
    }
    if(i<0 && j<0){
        if(check != 0){
            res.append("1");
        }
        reverse(res.begin(), res.end());
        return res;
    }
    else if(i>-1){
        while(i>-1){
            if(a[i] == '0'){
                if(check != 0){
                    res.append("1");
                    check = 0;
                }
                else{
                    res.append("0");
                }
            }
            else{
                if(check != 0){
                    res.append("0");
                } else {
                    res.append("1");
                }
            }
            i--;
        }
        if(check != 0){
            res.append("1");
        }
        reverse(res.begin(), res.end());
        return res;
    } else {
        while(j>-1){
            if(b[j] == '0'){
                if(check != 0){
                    res.append("1");
                    check = 0;
                }
                else{
                    res.append("0");
                }
            }
            else{
                if(check != 0){
                    res.append("0");
                } else {
                    res.append("1");
                }
            }
            j--;
        }
        if(check != 0){
            res.append("1");
        }
        reverse(res.begin(), res.end());
        return res;
    }
}
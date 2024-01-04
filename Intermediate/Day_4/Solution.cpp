#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> hashh;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            hashh[arr[i]]++;
        }
        int ans = -1;
        // Checking is there a number unique exist
        for(auto it:hashh){
            if(it.second == 1){
                ans = it.first;
                break;
            }
        }
        if(ans == -1){
            cout << -1 << endl;
        }
        else{
            for(int i=0; i<n; i++){
                if(arr[i] == ans){
                    // Returning the index of the unique number so found above
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
 
    return 0;
}
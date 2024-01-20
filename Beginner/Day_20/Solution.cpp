class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hashh;
        unordered_map<int, int> count;
        for(int i=0; i<arr.size(); i++){
            hashh[arr[i]]++;
        }
        for(auto it:hashh){
            if(count[it.second] > 0){
                return false;
            }
            count[it.second]++;
        }
        return true;
    }
};
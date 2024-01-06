class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> hashh;
        for(int i=0; i<nums.size(); i++){
            hashh[nums[i]]++;
        }
        vector<pair<int,int>> check;
        for(auto it:hashh){
            check.push_back({it.second, it.first});
        }
        sort(check.begin(), check.end());
        reverse(check.begin(), check.end());
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(check[i].second);
        }
        return res;
    }
};  
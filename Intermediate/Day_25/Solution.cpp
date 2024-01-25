class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        int pro = 1;
        prefix.push_back(1);
        for(int i=0; i<nums.size()-1; i++){
            pro *= nums[i];
            prefix.push_back(pro);
        }
        pro = 1;
        suffix.push_back(1);
        for(int i=nums.size()-1; i>=1; i--){
            pro *= nums[i];
            suffix.push_back(pro);
        }
        reverse(suffix.begin(), suffix.end());
        for(int i=0; i<prefix.size(); i++){
            prefix[i] = prefix[i]*suffix[i];
        }
        return prefix;
    }
};
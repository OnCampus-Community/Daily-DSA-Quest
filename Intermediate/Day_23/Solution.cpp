class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxxi = INT_MIN;
        for(int i=0; i<nums.size()/2; i++){
            if(nums[i]+nums[nums.size()-1-i] > maxxi){
                maxxi = nums[i]+nums[nums.size()-1-i];
            }
        }
        return maxxi;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> check;
        int n = nums.size()/2;
        for(int i=0; i<nums.size(); i++){
            check[nums[i]]++;
            if(check[nums[i]] > n){
                return nums[i];
            }
        }
        return 0;
    }
};
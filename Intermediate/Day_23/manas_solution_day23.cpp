class Solution {
public:
    int minPairSum(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        sort(nums.begin(),nums.end());
        int n =  nums.size(); 
        int Max = 0;
        for(int i = 0 ;i<n/2;i++)
        {
            Max =  max(Max,nums[i] + nums[n-1-i]);
        }
        return Max;
    }
};

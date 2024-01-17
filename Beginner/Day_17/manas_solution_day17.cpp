class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int c = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                c++;
            }
            else
            {
                if(max<c)
                {
                    max = c;
                }
                c=0;
            }
        }
        if(max<c) return c;
        return max;
    }
};

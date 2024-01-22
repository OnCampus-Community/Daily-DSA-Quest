class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int, int> hashh;
        for(int i=0; i<nums.size(); i++){
            hashh[nums[i]]++;
            int x = 0;
            while(nums[i]!=0){
                x = (x*10)+(nums[i]%10);
                nums[i] /= 10;
            }
            hashh[x]++;
        }
        int count = 0;
        for(auto it:hashh){
            count++;
        }
        return count;
    }
};
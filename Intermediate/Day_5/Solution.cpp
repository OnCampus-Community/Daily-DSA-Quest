class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> hashh;
        for(int i=0; i<nums.size(); i++){
            hashh[nums[i]]++;
        }
        int count = 0;
        for(auto it:hashh){
            if(it.second == 1){
                return -1;
            }
            else if(it.second%3 == 0){
                count+=it.second/3;
            }
            else{
                count+=it.second/3;
                count++;
            }
        }
        return count;
    }
};
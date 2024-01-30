class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int count = 0;
        int check = 0;
        unordered_map<int, int> hashh;
        int count1 = 0;
        for(int i=0; i<nums.size(); i++){
            hashh[nums[i]]++;
            if(nums[i] == 1){
                count1++;
            }
        }
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            int count = 1;
            int y = nums[i];
                int a = 1;
                while(a == 1){
                    int x = sqrt(nums[i]);
                    if(nums[i] == 1 && x == 1){
                        a = 0;
                    }
                    else if(x*x == nums[i]){
                        if(hashh[x] >= 2){
                            count+=2;
                            nums[i] = x;
                        }
                        else{
                            a = 0;
                        }
                    }
                    else{
                        a = 0;
                    }
                    ans = max(count, ans);
            }
        }
        if(count1%2 == 0 && count1 >= 1){
            count1--;
        }
        if(count1 > ans){
            return count1;
        }
        if(ans == 0){
            return 1;
        }
        return ans;
    }
};
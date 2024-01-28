class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int carry = 1;
        for(int i=digits.size()-1; i>=0; i--){
            res.push_back((digits[i]+carry)%10);
            carry = (digits[i]+carry)/10;
        }
        if(carry != 0){
            res.push_back(carry);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
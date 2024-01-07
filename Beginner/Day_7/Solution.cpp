class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool check = 1;
        if(n == 0){
            check = 0;
            return check;
        }
        while(n!=0){
            if(n%2 != 0 && n != 1){
                check = 0;
                break;
            }
            n /= 2;
        }
        return check;
    }
};
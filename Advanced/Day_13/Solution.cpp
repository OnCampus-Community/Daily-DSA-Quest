class Solution {
public:
    int clumsy(int n) {
        string str = "";
        vector<int> a;
        int b = n;
        while(b >= 1){
            if(b > 2){
                a.push_back(b*(b-1)/(b-2));
            }
            else if(b > 1){
                a.push_back(b*(b-1));
            }
            else{
                a.push_back(b);
            }
            b-=4;
        }
        int result = a[0];
        int minus = 3;
        for(int i=0; i<a.size(); i++){
            if(i != 0){
                result -= a[i];
            }
            if(n-minus > 0){
                result += n-minus;
                minus += 4;
            }
        }
        return result;
    }
};
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int count = 0;
        if(rowIndex == 0){
            return {1};
        }
        vector<int> res = {1};
        
        while(count!=rowIndex){
            vector<int> temp;
            temp.push_back(1);
            for(int i=0; i<res.size()-1; i++){
                temp.push_back(res[i]+res[i+1]);
            }
            temp.push_back(1);
            res = temp;
            count++;
        }
        return res;
    }
};
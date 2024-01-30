class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        char temp;
        int check = 0;
        int index = 0;
        while(true){
            if(index >= strs[0].size()){
                break;
            }
            else{
                temp = strs[0][index];
            }
            for(int i=0; i<strs.size(); i++){
                if(index >= strs[i].size()){
                    check = 1;
                    break;
                }
                if(strs[i][index] != temp){
                    check = 1;
                    break;
                }
            }
            if(check == 1){
                break;
            }
            else{
                res.append(1, temp);
                index++;
            }
        }
        return res;
    }
};
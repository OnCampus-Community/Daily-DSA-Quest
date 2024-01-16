class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> one;
        vector<int> two;
        map<int, int> hashh1;
        map<int, int> hashh2;
        for(int i=0; i<matches.size(); i++){
            hashh1[matches[i][0]]++;
            hashh2[matches[i][1]]++;
        }
        for(auto it:hashh1){
            if(hashh2[it.first] == 0){
                one.push_back(it.first);
            }
        }
        for(auto it:hashh2){
            if(it.second == 1){
                two.push_back(it.first);
            }
        }
        return {one, two};
    }
};
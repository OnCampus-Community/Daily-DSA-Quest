class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int, vector<int>>> res;
        for(int i=0; i<score.size(); i++){
            res.push_back({score[i][k], score[i]});
        }
        sort(res.rbegin(),res.rend());
        vector<vector<int>> ans;
        for(int i=0; i<score.size(); i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }
};
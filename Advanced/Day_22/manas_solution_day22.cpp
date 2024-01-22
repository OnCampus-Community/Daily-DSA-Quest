class Solution {
public:
void Sort(vector<int> &a1, vector<int> &a2, int n)
{
    int i, key1, j,key2;
    for (i = 1; i < n; i++) {
        key2 = a2[i];
        key1 = a1[i];
        j = i - 1;
        while (j >= 0 && a2[j] < key2) {
            a2[j + 1] = a2[j];
            a1[j + 1] = a1[j];
            j = j - 1;
        }
        a2[j + 1] = key2;
        a1[j + 1] = key1;
    }
}
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int> v1;
        vector<int> v2;
        vector<int> temp;
        int len = score.size();
        int lencol = score[0].size();
        for(int  i = 0 ;i<len;i++)
        {
            v1.push_back(i);
            v2.push_back(score[i][k]);
        }

        Sort(v1,v2,len);

        vector<vector<int>> ans;
        for(int i = 0;i<len;i++)
        {
             for(int j = 0;j<lencol;j++)
             {
                 temp.push_back(score[v1[i]][j]);
             }
             ans.push_back(temp);
             temp.clear();
        }
        return ans;
    }
};

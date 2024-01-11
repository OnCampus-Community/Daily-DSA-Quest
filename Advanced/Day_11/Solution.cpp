class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string, int> hashh;
        int i=0;
        int x = 1;
        string temp = "";
        int maxxi = 0;
        while(i<s.size()){
            x = 1;
            temp = "";
            temp+=s[i];
            hashh[temp]++;
            while(i+x < s.size() && s[i] == s[i+x]){
                temp += s[i+x];
                hashh[temp]++;
                if(hashh[temp] > 2 && temp.size() > maxxi){
                    maxxi = temp.size();
                }
                x++;
            }
            if(hashh[temp] > 2 && temp.size() > maxxi){
                maxxi = temp.size();
            }
            i++;
        }
        if(maxxi == 0){
            return -1;
        }
        return maxxi;
    }
};
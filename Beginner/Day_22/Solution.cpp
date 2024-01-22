class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> hashh;
        for(int i=0; i<s.size(); i++){
            hashh[s[i]]++;
            if(hashh[s[i]] == 2){
                return s[i];
            }
        }
        return '#';
    }
};
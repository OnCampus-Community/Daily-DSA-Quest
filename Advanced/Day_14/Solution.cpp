class Solution {
public:
    int minSteps(string s, string t) {
        string str1 = s;
        string str2 = t;
        int hash1[26] = {0};
    int hash2[26] = {0};
    for(int i=0; i<str1.size(); i++){
        hash1[str1[i]-97]++;
    }
    for(int i=0; i<str2.size(); i++){
        hash2[str2[i]-97]++;
    }
    int count = 0;
    for(int i=0; i<26; i++){
        if(hash1[i] != hash2[i]){
            count+=abs(hash2[i]-hash1[i]);
        }
    }
    return count/2;
    }
};
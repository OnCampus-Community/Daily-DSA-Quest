class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector<int> res;
        int i=0;
        int j=0;
        while(i!=array1.size() && j!=array2.size()){
            if(array1[i] == array2[j]){
                res.push_back(array1[i]);
                res.push_back(array1[i]);
                i++;
                j++;
            }
            else if(array1[i] < array2[j]){
                res.push_back(array1[i]);
                i++;
            }
            else{
                res.push_back(array2[j]);
                j++;
            }
        }
        while(i!=array1.size()){
            res.push_back(array1[i]);
            i++;
        }
        while(j!=array2.size()){
            res.push_back(array2[j]);
            j++;
        }
        if(res.size()%2 == 0){
           double ans = res[res.size()/2]+res[(res.size()/2)-1];
           ans /= 2;
           return ans;
        }  
        else{
            return res[res.size()/2];
        }
    }
};
class Solution{
    public:
    double MedianOfArrays(vector<int>& a, vector<int>& b)
    {
        vector<int> c;
        int i = 0; int j = 0;
        int l1 = a.size();
        int l2 = b.size();
        
        while(i<l1 && j<l2)
        {
            if(a[i]<b[j])
            c.push_back(a[i++]);
            
            else 
            c.push_back(b[j++]);
        }
        
        while(i<l1) c.push_back(a[i++]);
        
        while(j<l2) c.push_back(b[j++]);
        
        int l = l1 + l2;
        if(l%2==1)
        return c[l/2];
        
        else
        return (double)( (double)(c[l/2]) + (double)(c[l/2-1]) )/2.0;
    }
};

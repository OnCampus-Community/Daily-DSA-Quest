class GFG 
{ 
    static double medianOfArrays(int n, int m, int a[], int b[]) 
    {
        // Your Code Here
        int c=0;
        int d=0;
        int totLen=a.length+b.length;
        int arr[]=new int[totLen];
        double ans=0;
        for(int i=0;i<totLen;i++){
            if(c<a.length){
                arr[i]=a[c];
                c++;
            }else{
                arr[i]=b[d];
                d++;
            }
        }
        Arrays.sort(arr);
        if(totLen%2==0){
            ans=(arr[totLen/2]+arr[totLen/2-1]);
            return ans/2;
        }
        return ans=arr[totLen/2];
    }
}

 

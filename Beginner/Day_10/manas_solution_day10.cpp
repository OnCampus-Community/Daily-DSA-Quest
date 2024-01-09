#define pb push_back
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> v;
    if(n==1)
    v.pb(0);
    else if (n == 2) {
    v.pb(0);
    v.pb(1);
    }
    else
    {
    v.pb(0);
    v.pb(1);       
    int sum = v[0]+v[1];
    v.pb(sum);

    for(int i =2;i<n-1;i++)
    {
        sum = v[i]+v[i-1];
        v.pb(sum);
    }

    }
    return v;
}

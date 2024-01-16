#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n >> x;
	    int arr[n-1];
	    int sum = 0;
	    for(int i=0; i<n-1; i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    x = x*n;
	    if(sum >= x){
	        cout << 0 << endl;
	    }
	    else{
	        cout << x-sum << endl;
	    }
	}
	return 0;
}
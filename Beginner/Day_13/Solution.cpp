#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int l, r, m;
	    cin >> l >> r >> m;
	    int count = m/r;
	    if(m%l == 0){
	        count += m/l;
	    }
	    else{
	        count += (m/l)+1;
	    }
	    cout << count << endl;
	}
	return 0;
}

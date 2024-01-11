#include <iostream>
using namespace std;

int main() {
	int t, n, m, k;
	cin >> t;
	for(int i = 0; i < t; i++){
	    cin >> n;
	    cin >> m;
	    cin >> k;
	    int a = n + k;
	    if(m >= a){
	        cout <<"Yes"<<endl;
	    }
	    else{
	        cout <<"No"<<endl;
	    }
	}
	return 0;
}

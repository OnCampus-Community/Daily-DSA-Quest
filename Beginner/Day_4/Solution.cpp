#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int t;
	cin >> t;
	int even = 0;
	int odd = 0;
	while(t!=0){
		if(t%2 == 0){
			even += t%10;
		}
		else{
			odd += t%10;
		}
		t/=10;
	}
	cout << even << " " << odd << endl;
}

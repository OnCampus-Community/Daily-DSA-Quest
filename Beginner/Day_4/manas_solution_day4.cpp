#include<iostream>
#define EVEN(x) (x%2==0)
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int esum = 0;
	int osum = 0;
	while(n>0)
	{
		int d = n%10;
		if(EVEN(d))
		esum += d;
		else
		osum += d;
		n /= 10;
	}
	cout<<esum<<" "<<osum;
}

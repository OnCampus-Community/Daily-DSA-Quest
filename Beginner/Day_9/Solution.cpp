#include <iostream>
using namespace std;

int main() {
	int a, b, x, y;
	int mess, ron;
	cin >> a >> b >> x >> y;
	mess = (a*2) + b;
	ron = (x*2) + y;
	if(mess == ron){
	    cout << "Equal" << endl;
	}
	else if(mess > ron){
	    cout << "Messi" << endl;
	}
	else{
	    cout << "Ronaldo" << endl;
	}
	return 0;
}

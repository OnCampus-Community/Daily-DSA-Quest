#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a;
        cin >> b;
      // As we know the numbers of buns produced depends on the number of buns and patties
      // The outcome of the produce depends on the number of minimum number of depedendies 
      // As a result the number of produce depends on which is present in least amount 
        if(a <= b){
            cout << a << endl;
        }
        else{
            cout << b << endl;
        }
    }
	return 0;
}

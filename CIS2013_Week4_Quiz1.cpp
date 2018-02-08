#include <iostream>

using namespace std;

int main(){
	int i = 0;
	for (i=0;i<=2000;i++){
		cout << i << endl;
		if (i % 33 == 0){
			cout << i << " BAR" << endl;
		}
		if (i % 50 == 0){
			cout << i << " FOO" << endl;
		}
		
	}
	
}
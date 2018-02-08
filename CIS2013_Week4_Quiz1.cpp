#include <iostream>

using namespace std;

int main(){
	int i = 0;
	int FOO = 0;
	int BAR = 0;
	for (i=0;i<=2000;i++){
		cout << i;
		
		if (i % 50 == 0){
			cout << " FOO";
			FOO = FOO + 1;
		}
		if (i % 33 == 0){
			cout << " BAR"; 
			BAR = BAR + 1;
		}
		cout << endl;
	}
	cout << "Your FOO total is: " << FOO << endl;
	cout << "Your BAR total is: " << BAR << endl;
}
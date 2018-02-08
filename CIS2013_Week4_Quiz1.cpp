#include <iostream>

using namespace std;

int main(){
	int i = 0;
	for (i=0;i<=2000;i++){
		cout << i;
		
		if (i % 33 == 0){
			cout << " BAR";
		}
		if (i % 50 == 0){
			cout << " FOO";
		}
		cout << endl;
	}
	
}
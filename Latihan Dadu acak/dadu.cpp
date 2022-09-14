#include <iostream>
#include <cstdlib> // mengandung fungsi random

using namespace std;

int main(){
//	for(int i=0;i < 10; i++){
//		cout << 1 + (rand() % 6) << endl;
//	}
//	
	
	char lanjut;
	while(true){
		cout << "Ingin melempar dadu ? (Y / N): ";
		cin >> lanjut;
	
		if ( lanjut == 'y'){
			cout << 1 + (rand() % 6) << endl;
		} else if (lanjut == 'n'){
			break;	
		}else {
			cout << "Maaf opsi hanya (Y/N)" << endl;
		}
		
	}
	
	
	
	cin.get();
	return 0;
}


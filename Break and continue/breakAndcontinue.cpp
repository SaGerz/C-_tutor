#include <iostream>

using namespace std;

int main (){
	cout << "Break dan continue tapi dengan for loop" <<  endl;	
	for(int i = 0; i <= 10; i++){
		if (i == 5){
		//break; //ini digunakan untuk menghentikan pengulangan
		//continue; // ini digunakan untuk mengskip bagian yang ingin di skip
		}
		cout << i << endl;	
	}
	
	cout << "\n\n -------------------------------------------------------------" << endl;	

	cout <<	"\n Break and continue dengan while" << endl;
	int i = 0;
	while(i < 10 ){
		i ++;  // >> saat mengunakan continue didalam pengulangan while lebih baik increment atau decrement diletakan di sini agar dapat berjalan baik
		if(i == 5){
			continue;	
		}
		cout << i << endl;
	
	
	}
	
	
	cout << "Akhirnya" << endl;

	cin.get();
	return 0;
}

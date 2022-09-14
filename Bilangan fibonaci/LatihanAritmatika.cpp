#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int U_n;
	int U_1;
	int U_2;
	int n;
	int r;
	
	cout << "Masukan Suku ke-n untuk mebuat dereet : ";
	cin >> n; 
	cout << "masukan Nilai rasio sebagai selisih antar suku : ";
	cin >> r;
	
	 
	U_1 = 0;
//	U_2 = 2;
	cout << U_1 << " ";
	for (int i = 1; i < n; i++){
		
		
		U_2 = U_1;
		U_1 = U_n;			
		U_n = U_1 + r;
		
		cout << U_n << " ";
	
		
	}
		cout <<  "Maka suku ke " << n << " adalah " << U_n;
	
}

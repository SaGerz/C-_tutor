#include <iostream>
using namespace std;

//Fungsi luas persegi panjang 
double hitungLuas (double p, double l){
	double hasil = p * l;
	return hasil;
}

//Fungsi keliling persegi panjang
double hitungKeliling (double p, double l){
	double hasil = 2 * (p + l);
	return hasil;
}

//Fungsi peanggilan dengan void
void hasil_Luas (double p, double l){
	cout << "Hasil luas nya adalah " << hitungLuas(p,l) << endl;
}

void hasil_Keliling (double p, double l){
	cout << "Hasil keliling nya adalah " << hitungKeliling(p,l) << endl;
}

int main (){
	//Luas dan keliling
	double panjang, lebar;
	cout << "Masukan panjang : ";
	cin >> panjang;
	cout << "Masukan lebar : ";
	cin >> lebar;

	hasil_Luas (panjang, lebar);	
	hasil_Keliling (panjang, lebar);

	cin.get();
	return 0;
}

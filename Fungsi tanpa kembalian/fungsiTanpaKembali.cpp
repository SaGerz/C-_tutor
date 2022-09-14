#include <iostream>
using namespace std;

//reporter
int kuadrat(int input){
	int hasil = input * input;
	return hasil;
}

void tampilkan (int input){
	cout << input << endl;
}

int tambah (int x, int y){
	int hasil2 = x + y;
	return hasil2;
}

void tampilkan2 (int input2){
	cout << input2;
}

int main(){

	int i, hasil, a, b, hasil2, hasil3, x, y;	
	//Kuadrat	
	cout << "Nilai kuadrat dari: "; 
	cin >> i;
	hasil = kuadrat(i);
	tampilkan(hasil);
	
	cout << "\n-------------------------------\n" << endl;
	//Tambah	
	cout << "Masukan Nilai X: ";
	cin >> x;
	cout << "Masukan Nilai Y: ";
	cin >> y;
	
	hasil2 = tambah(x,y);
	tampilkan2(hasil2);




}


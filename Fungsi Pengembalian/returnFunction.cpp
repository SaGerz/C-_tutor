#include <iostream>
using namespace std;

int kuadrat(int input){
	int hasil = input * input;
	return hasil;
}

int tambah(int a, int b){
	int hasil2 = a + b;
	return hasil2;
}

int bagi (int x, int y){
	int hasil3 = x / y;
	return hasil3;
}

int main(){

	int i, hasil, a, b, hasil2, hasil3, x, y;	
	//Kuadrat	
	cout << "Nilai kuadrat dari: "; 
	cin >> i;
	hasil = kuadrat(i);
	cout << "Nilai kuadrat dari " << i << " adalah " << hasil << endl;
	
	cout << "\n-------------------------------\n" << endl;

	//Tambah	
	cout << "Masukan nilai a: ";
	cin >> a;
	cout << "Masukan nilai b: ";
	cin >> b; 
	
	hasil2 = tambah(a,b);
	cout << "Nilai tambah dari " << a << " dan " << b << " adalah " << hasil2 << endl;
	
	
	cout << "\n-------------------------------\n" << endl;
	
	
	//Pembagian
	cout << "Masukan nilai X : ";
	cin >> x;
	cout << "Masukan nilai y : ";
	cin >> y;
	
	hasil3 = bagi(x,y);
	cout << "Nilai bagi dari " << x << " dan " << y << " adalah " << hasil3;

	
	 
} 

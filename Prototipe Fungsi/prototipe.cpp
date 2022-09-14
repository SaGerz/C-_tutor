#include <iostream>
using namespace std;


//prototype (deklarasi diatas yang disebut prototypenya dan penjabarann bisa dibawahnya.)
double hitungLuas (double p, double l);
void hasilLuas (double hasil);

int main (){
	double panjang, lebar, luas;
	cin >> panjang;
	cin >> lebar;
	luas = hitungLuas(panjang, lebar);
	hasilLuas(luas);
}

double hitungLuas (double p, double l){
	return p * l;
}

void hasilLuas (double hasil){
	cout << hasil << endl;
}

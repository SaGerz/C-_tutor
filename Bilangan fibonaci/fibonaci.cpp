#include <iostream>

using namespace std;

int main (){
	int fn;
	int fn1;
	int fn2;
	int n;
	
	
	cout << "Program Deret Bilangan Fibonanci  \n" << endl;
	cout << "-----------------------------------\n" << endl;
	cout << "Masukan nilai ke-n : ";
	cin >> n;
	
	//Formula deret fibonaci fn = fn1 + fn2.
//	fn1 = 0;
//	fn2 = 1;
//	fn n= fn1 + fn2;
//	cout << fn << ",";
	for(int i = 1; i <= n; i++){
	
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
		
		
		cout << fn << ",";
		
	}
	  

	cin.get();
	return 0;
}

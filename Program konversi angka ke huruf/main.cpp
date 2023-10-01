#include<iostream>
using namespace std;
int main()
{
	/*
	Program konversi nilai angka ke huruf dengan ketentuan sebagai berikut :

	Nilai Angka				Nilai Huruf
	86<=Nilai<=100			A
	66<=Nilai<=85			B
	46<=Nilai<=65			C
	1<=Nilai<=45			D
	0<=Nilai<=1				E
	*/

	float nilai;
	cout << "Masukan nilai dalam rentang 0-100 :";
	cin >> nilai;

	if (nilai >= 100){
		cout << "Nilai tersebut Tidak Valid " << endl;
	}else if (nilai >=86){
		cout <<"Nilai tersebut A"<< endl;
	}else if (nilai>=66){
		cout <<"Nilai tersebut B"<< endl;
	}else if (nilai>=46){
		cout <<"Nilai tersebut C"<< endl;
	}else if (nilai>=45){
		cout <<"Nilai tersebut D"<< endl;
	}else if (nilai>=1){
		cout <<"Nilai tersebut E"<< endl;
	}else if (nilai>=0){
		cout << "Nilai tersebut E"<< endl;
	}else{
		cout << "Nilai tersebut tidak valid"<< endl;
	}

	system("pause");

	return 0;
}
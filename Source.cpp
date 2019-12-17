#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

void CetakGaris();

int i;
double X;

/*
	-------------------------------------------------------------
	Libary Referensi			: www.cppreference.com
	-------------------------------------------------------------
	ceil(variabel)				: Pembulatan Nilai Ke Atas
	cos(variabel)				: Untuk Mengetahui Nilai Cosinus
	exp(variabel)				: Exponen
	fabs(variabel)				: Nilai Absolut Dalam Float
	floor(variabel)				: Pembulatan Nilai Ke Bawah
	fmod(variabel1, variabel 2)             : Modulus Dalam Float
	log(variabel)				: Logaritma Dengan Basis Natural
	log10(variabel)				: Logaritma Dengan Basis 10
	pow(variabel1, variabel2)	        : Perpangkatan
	sin(variabel)				: Mancari Nilai Sinus
	sqrt(variabel)				: Mencari Akar Kuadrat
	tan(variabel)				: Mencari Nilai Tangen
	-------------------------------------------------------------
*/

int main()
{
	cout << "Masukkan Nilai X : "; cin >> X;
	CetakGaris();

	cout << "ceil             : " << ceil(X) << endl;
	cout << "cos              : " << cos(X) << endl;
	cout << "exp              : " << exp(X) << endl;
	cout << "fabs             : " << fabs(X) << endl;
	cout << "floor            : " << floor(X) << endl;
	cout << "fmod             : " << fmod(X, 1) << endl;
	cout << "log              : " << log(X) << endl;
	cout << "log10            : " << log10(X) << endl;
	cout << "pow              : " << pow(X, 2) << endl;
	cout << "sin              : " << sin(X) << endl;
	cout << "sqrt             : " << sqrt(X) << endl;
	cout << "tan              : " << tan(X) << endl;

	_getch();
	return 0;
}

void CetakGaris()
{
	for (i = 0; i <= 20; i++)
	{
		cout << "-";
	}
	cout << endl;
}

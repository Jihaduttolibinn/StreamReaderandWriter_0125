#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()

{

	string baris;
	ofstream outfile;
	outfile.open("contohfile.txt");


	cout << "Menulis file, \'q\' untuk keluar " << endl;


	//unlimited loop untuk menulis
	while (true)
	{
		cout << ">";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari baris ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();


	//Membuka file dalam mode membaca
	ifstream infile;

	//Menunjukkan ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dabn membaca file " << endl;
	//Jika file ada maka
	if (infile.is_open())
	{
		//Melakukkan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	}
	//Jika tidak ditemukan file maka akan menampilkan ini
	else cout << "Unable to open file";
	return 0;


}

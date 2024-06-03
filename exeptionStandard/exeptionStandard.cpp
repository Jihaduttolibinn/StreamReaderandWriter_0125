#include <iostream>
#include <exception>
//untuk obyek exception yang akan di gunakan 
#include <array>
//untuk obyek array yang akan di gunakan 
using namespace std;

int main()
{
	cout << "Awal program" << endl; // penanda 1:....
	try {
		array<int, 3> data = { 1,2,3 };
		//pesan array integer 3 element
		cout << data.at(5) << endl;
		//memamnggil array elemen ke 5
	}

	catch (exception& e)
	{
		//penanhkap menggunakan obyek exception
		cout << e.what() << endl;
		/*akan dieksekusi karna arrayy data hanya data yang memiliki 3 elemen*/
	}
	cout << "Baris program yang terakhir" << endl;
}

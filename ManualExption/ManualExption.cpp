#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main()
{
	try {
		cout << "Selamat Belajar di prodi TI UMY" << endl;

		// throw 0.5; //melemparkakn sebuah integer maka
		cout << "Peryataan tidak akan dieksekusi" << endl;

	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualilan akan dieksekusi" << endl;

	}

	catch (...)
	{
		/*jika selain interger maka block ini akan dieksekusi */
			cout << "default Pengecualian dieksekusi" << endl;
	}

	return 0;
}


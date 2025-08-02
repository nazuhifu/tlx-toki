#include <iostream>
using namespace std;

int main()
{
	int jantan, betina;

	// banyaknya bebek saat ini
	jantan = 63;
	betina = 192;

	// setelah bulan pertama
	betina = betina + jantan;
	jantan = jantan - (jantan / 3);

	// setelah bulan kedua
	jantan = jantan + betina;
	betina = betina - 10;

	// cetak total bebek
	cout << jantan + betina << endl;
}

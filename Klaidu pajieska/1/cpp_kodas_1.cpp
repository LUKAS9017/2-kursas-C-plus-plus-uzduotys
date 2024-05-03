//1.  Duoti datos ir gimstamumo rodikliai, surasyti i masyva formatu: {menuo, diena, lytis, kiekis, lytis, kiekis].
// Programa turetu rasti kiek ta menesi gime vyriskos ir moteriskos lyties kudikiu (pagal vartotojo ivesta men). 
// Istaisykite programos klaidas ir paaiskinkite koda.

#include <iostream>
using namespace std;

int main()
{
	char kiekis[5][6] = { { 01, 15, 'v', 5,'m',8 },
						{ 01, 16, 'v', 3,'m',1 },
						{ 01, 17, 'm', 2,'v',2 },
						{ 01, 18, 'v', 4,'m',3 },
						{ 02, 15, 'm', 3,'v',3 } };
	int menuo, v = 0, m = 0;
	bool ar = false;

	do {
		cout << "Iveskite menesio numeri: ";
		cin >> menuo;
		if (menuo < 1 or menuo>=12) {
			cout << "Tokio menesio nera"<< endl;
			ar = false;
		}
		else ar = true;
	} while (ar == false);

		for (int j = 0; j < 5; j++) {
			if (kiekis[0][j] == menuo) {
				v += kiekis[3][j];
				m += kiekis[5][j];
			}
		}
	cout << "menesi gimusiu vyru skaicius: " << m << ", moteru: " << v << endl;
return 0;
}

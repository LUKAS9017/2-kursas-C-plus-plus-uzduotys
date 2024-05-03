//1.  Duoti datos ir gimstamumo rodikliai, surasyti i masyva formatu: {menuo, diena, lytis, kiekis, lytis, kiekis].
// Programa turetu rasti kiek ta menesi gime vyriskos ir moteriskos lyties kudikiu (pagal vartotojo ivesta men). 
// Istaisykite programos klaidas ir paaiskinkite koda.

#include <iostream>
using namespace std;

int main()
{
	int kiekis[5][6] = {
		{ 01, 15, 'v', 5, 'm', 8 },
		{ 01, 16, 'v', 3, 'm', 1 },
		{ 01, 17, 'm', 2, 'v', 2 },
		{ 01, 18, 'v', 4, 'm', 3 },
		{ 02, 15, 'm', 3, 'v', 3 }
	};
	int menuo, v = 0, m = 0;

	cout << "Iveskite menesio numeri: ";
	cin >> menuo;

	if (menuo < 1 or menuo > 12) {
		cout << "Tokio menesio nera"<< endl;
	}

    else{
	for (int i = 0; i < 5; i++) {
		if (kiekis[i][0] == menuo) {
		    if (kiekis[i][2] == 'v') {
		        v += kiekis[i][3];
		    }
		    else {
			    m += kiekis[i][3];
		    }
		    
		    if (kiekis[i][4] == 'v') {
		        v += kiekis[i][5];
		    }
		    else {
			    m += kiekis[i][5];
		    }
		}
	}
	cout << "Menesi gimusiu vyru skaicius: " << v << ", moteru: " << m << endl;
    }
	return 0;
}

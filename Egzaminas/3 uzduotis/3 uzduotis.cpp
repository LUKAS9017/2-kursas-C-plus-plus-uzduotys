#include <iostream>
#include <limits>

using namespace std;

void suma() {
    int x, suma = 0;
    
    cout << "Iveskite skaiciu kieki: ";
    while (!(cin >> x) || x <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Klaida, netinkamas skaicius. Iveskite skaiciu dar karta: ";
    }

    int c[x];  
    
    cout << "Iveskite skaicius: ";
    for (int i = 0; i < x; i++) {
        while (!(cin >> c[i])) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Klaida, netinkamas skaicius. Iveskite skaiciu dar karta: ";
        }

        suma = suma + c[i];
    }
    cout << "Suma yra: " << suma << endl;
}

int main()
{
    suma();
    return 0;
}

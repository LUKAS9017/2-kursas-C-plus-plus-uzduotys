#include <iostream>

using namespace std;

void suma() {
    int x, suma = 0;
    
    cout << "Iveskite skaiciu kieki: ";
    cin >> x;

    int c[x];  
    
    cout << "Iveskite skaicius: ";
    for (int i = 0; i < x; i++) {
        cin >> c[i];
        suma = suma + c[i];
    }
    cout << "Suma yra: " << suma << endl;
}

int main()
{
    suma();
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text[10] = { "pirmas", "antras", "trecias", "ketvirtas", "penktas", "sestas", "septintas", "astuntas", "devintas", "desimtas" };
    string zodis;
    int ilgis, suma, r;
    
    cout << "Iveskite riba: ";
    cin >> r;

    for (int i = 0; i < 10; i++) {
        zodis = text[i];
        ilgis = zodis.length();
        suma = 0;

        for (int j = 0; j < ilgis; j++) {
            suma += zodis[j];
        }

        if (suma > r)
        cout << suma << endl;
        else cout << zodis << endl;
    }

    return 0;
}

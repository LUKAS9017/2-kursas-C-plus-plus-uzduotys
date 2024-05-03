#include <iostream>
#include <cmath>

using namespace std;

void printas(int des, int dvejetaine) {
    cout << des << " | " << dvejetaine << endl;
}

void desimtaineIDvejetaine(int des) {
    int dvejetaine[32];
    int kelintas = 0;

    while (des > 0) {
        dvejetaine[kelintas] = des % 2;
        des = des / 2;
        printas(des, dvejetaine[kelintas]);
        kelintas++;
    }

    cout << "Dvejetainis skaicius: ";
    for (int i = kelintas - 1; i >= 0; i--) {
        cout << dvejetaine[i];
    }
    cout << endl;
}

void dvejetaineIDesimtaine(int dvejetaine) {
    int des = 0;
    int laipsnis = 0;

    while (dvejetaine > 0) {
        int pasSk = dvejetaine % 10;
        des += pasSk * pow(2, laipsnis);
        printas(dvejetaine, pasSk * pow(2, laipsnis));
        laipsnis++;
        dvejetaine /= 10;
    }

    cout << "Desimtainis skaicius: " << des << endl;
}

int main() {
    int p;
    cout << "Jei norite konvertuoti desimtaine i dvejetaine parasykite 1, o jei norite dvejataine i desimtaine spauskite 2: ";
    cin >> p;

    if (p == 1) {
        int des;
        cout << "Iveskite desimtaini skaiciu: ";
        cin >> des;

        desimtaineIDvejetaine(des);
    } else if (p == 2) {
        int dvejetaine;
        cout << "Iveskite dvejetaini skaiciu: ";
        cin >> dvejetaine;

        dvejetaineIDesimtaine(dvejetaine);
    } else {
        cout << "Klaida" << endl;
    }

    return 0;
}

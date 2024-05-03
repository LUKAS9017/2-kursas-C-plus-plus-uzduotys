#include <iostream>

using namespace std;

void uzduotis() {
    int sk;
    cout << "Iveskite skaiciu: ";
    cin >> sk;
    if (sk >= 1000 && sk <= 9999 && sk % 2 != 0) cout << "True";
    else cout << "False";

}

int main()
{
    uzduotis();
    return 0;
}


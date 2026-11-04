#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("harta.txt");

    int nrLinii = 15;
    int nrColoane = 18;
    char harta[15][18];

    int marioLinie = -1;
    int marioColoana = -1;

    for (int i = 0; i < nrLinii; i++) {
        for (int j = 0; j < nrColoane; j++) {
            fin >> harta[i][j];

            if (harta[i][j] == 'M') {
                marioLinie = i;
                marioColoana = j;
            }
        }
    }

    for (int i = 0; i < nrLinii; i++) {
        for (int j = 0; j < nrColoane; j++) {
            cout << harta[i][j];
        }
        cout << '\n';
    }

    cout << "\nMario a fost gasit la coordonatele: linia " << marioLinie << ", coloana " << marioColoana << '\n';

    return 0;
}
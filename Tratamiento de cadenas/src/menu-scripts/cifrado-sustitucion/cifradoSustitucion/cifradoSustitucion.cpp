#include <iostream>

using namespace std;

void mostrarSubMenuSustitucion() {

    cout << "===== MENU SUSTITUCION =====" << endl;

    cout << "1. Cesar " << endl;

    cout << "2. Afin " << endl;

    cout << "3. Vigenere " << endl;

    cout << "4. Volver al menu cifrado" << endl;

    cout << "============================" << endl;

}

int main() {

    int opcion;

    do {

        mostrarSubMenuSustitucion();

        cout << "Seleccione una opcion: ";

        cin >> opcion;

        switch (opcion) {

        case 1:

            cout << "1. Cesar " << endl;

            break;

        case 2:

            cout << "2. Afin " << endl;

            break;

        case 3:

            cout << "3. Vigenere " << endl;

            break;

        case 4:

            cout << "Saliendo del programa..." << endl;

            break;

        default:

            cout << "Opcion no valida, intente nuevamente." << endl;

        }

    } while (opcion != 4);

    return 0;

}
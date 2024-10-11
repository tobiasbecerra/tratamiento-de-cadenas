#include <iostream>

using namespace std;



void mostrarSubMenuPoligrafico() {

    cout << "===== MENU POLIGRAFICO =====" << endl;

    cout << "1. Playfair " << endl;

    cout << "2. Hill " << endl;

    cout << "3. Volver al menu " << endl;

    cout << "============================" << endl;

}



int main() {

    int opcion;

    do {

        mostrarSubMenuPoligrafico();

        cout << "Seleccione una opcion: ";

        cin >> opcion;

        switch (opcion) {

        case 1:

            cout << "1. Playfair " << endl;

            break;

        case 2:

            cout << "2. Hill " << endl;


            break;

        case 3:

            cout << "Saliendo del programa..." << endl;

            break;

        default:

            cout << "Opcion no valida, intente nuevamente." << endl;

        }

    } while (opcion != 3);

    return 0;

}


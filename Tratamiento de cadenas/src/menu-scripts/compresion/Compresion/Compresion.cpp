#include <iostream>

using namespace std;

void mostrarSubMenuCompresion() {

    cout << "===== MENU COMPRESION =====" << endl;

    cout << "1. Huffman " << endl;

    cout << "2. Lempel-Ziv-Welch (LZW) " << endl;

    cout << "3. Volver al menu principal" << endl;

    cout << "============================" << endl;

}

int main() {

    int opcion;

    do {

        mostrarSubMenuCompresion();

        cout << "Seleccione una opcion: ";

        cin >> opcion;

        switch (opcion) {

        case 1:

            cout << "1. Huffman " << endl;

            break;

        case 2:

            cout << "2. Lempel-Ziv-Welch (LZW) " << endl;


            break;

        case 3:

            cout << "Saliendo del programa..." << endl;

            break;

        case 4:

            cout << "Saliendo del programa..." << endl;

            break;

        default:

            cout << "Opcion no valida, intente nuevamente." << endl;

        }

    } while (opcion != 3);

    return 0;

}


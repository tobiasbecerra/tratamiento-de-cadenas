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
        system("cls");
        mostrarSubMenuCompresion();
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            system("cls");
            cout << "1. Huffman " << endl;
            cin.ignore();
            cin.get();
            break;
        case 2:
            system("cls");
            cout << "2. Lempel-Ziv-Welch (LZW) " << endl;
            cin.ignore();
            cin.get();
            break;
        case 3:
            break;
        default:
            cout << "Opcion no valida, toque cualquier letra para intentarlo nuevamente." << endl;
            cin.ignore();
            cin.get();
        }
    } while (opcion != 3);
    return 0;
}


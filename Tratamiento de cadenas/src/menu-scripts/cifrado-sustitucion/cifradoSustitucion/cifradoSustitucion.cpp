#include <iostream>

using namespace std;

void mostrarSubMenuSustitucion() {
    cout << "======= MENU DE SUSTITUCION =======" << endl;
    cout << "\n\t1. Cesar " << endl;
    cout << "\t2. Afin " << endl;
    cout << "\t3. Vigenere " << endl;
    cout << "\t4. Volver al menu cifrado" << endl;
    cout << "\n===================================" << endl;
}

int main() {
    int opcion;
    do {
        system("cls");
        mostrarSubMenuSustitucion();
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            system("cls");
            cout << "1. Cesar " << endl;
            cin.ignore();
            cin.get();
            break;
        case 2:
            system("cls");
            cout << "2. Afin " << endl;
            cin.ignore();
            cin.get();
            break;
        case 3:
            system("cls");
            cout << "3. Vigenere " << endl;
            cin.ignore();
            cin.get();
            break;
        case 4:
            break;
        default:
            cout << "Opcion no valida, presione cualquier tecla para intentar nuevamente." << endl;
            cin.ignore();
            cin.get();
        }

    } while (opcion != 4);

    return 0;

}
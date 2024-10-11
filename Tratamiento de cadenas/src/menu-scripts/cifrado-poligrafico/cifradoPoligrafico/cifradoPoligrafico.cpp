#include <iostream>

using namespace std;



void mostrarSubMenuPoligrafico() {
    cout << "======= MENU DE POLIGRAFICO =======" << endl;
    cout << "\n\t1. Playfair " << endl;
    cout << "\t2. Hill " << endl;
    cout << "\t3. Volver al menu " << endl;
    cout << "\n===================================" << endl;
}



int main() {
    int opcion;
    do {
        system("cls");
        mostrarSubMenuPoligrafico();
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            system("cls");
            cout << "1. Playfair " << endl;
            cin.ignore();
            cin.get();
            break;
        case 2:
            system("cls");
            cout << "2. Hill " << endl;
            cin.ignore();
            cin.get();
            break;
        case 3:
            break;
        default:
            cout << "Opcion no valida, presione cualquier tecla para intentar nuevamente." << endl;
            cin.ignore();
            cin.get();
        }

    } while (opcion != 3);

    return 0;

}


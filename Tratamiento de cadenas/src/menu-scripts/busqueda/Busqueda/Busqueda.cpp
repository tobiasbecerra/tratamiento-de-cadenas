#include <iostream>

using namespace std;


void mostrarSubMenuBusqueda() {

    cout << "======= MENU DE BUSQUEDA =======" << endl;
    cout << "\n\t1. Fuerza Bruta (FB) " << endl;
    cout << "\t2. Knuth-Morris-Pratt (KMP) " << endl;
    cout << "\t3. Boyer-Moore (BM) " << endl;
    cout << "\t4. Volver al menu principal" << endl;
    cout << "\n===============================" << endl;
}


int main() {

    int opcion;

    do {
        system("cls");
        mostrarSubMenuBusqueda();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            cout << "1. Fuerza Bruta (FB) " << endl;
            cin.ignore();
            cin.get();
            break;
        case 2:
            system("cls");
            cout << "2. Knuth-Morris-Pratt (KMP) " << endl;
            cin.ignore();
            cin.get();
            break;
        case 3:
            system("cls");
            cout << "3. Boyer-Moore (BM) " << endl;
            cin.ignore();
            cin.get();
            break;
        case 4:
            break;
        default:
            system("cls");
            cout << "Opcion no valida, toque cualquier tecla para intentarlo nuevamente." << endl;
            cin.get();
        }

    } while (opcion != 4);

    return 0;

}


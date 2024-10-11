#include <iostream>
#include <cstdlib>
using namespace std;

void mostrarMenu() {
    cout << "======= TRATAMIENTO DE CADENAS =======" << endl;
    cout << "\n\t1. Busqueda " << endl;
    cout << "\t2. Compresion " << endl;
    cout << "\t3. Cifrado por sustitucion " << endl;
    cout << "\t4. Cifrado poligrafico " << endl;
    cout << "\t5. Salir " << endl;
    cout << "\n======================================" << endl;
}

int main() {
    int opcion;

    do {
        system("cls");
        mostrarMenu();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            system("src\\menu-scripts\\busqueda\\x64\\Debug\\Busqueda.exe");
            //cin.ignore();
            cin.get();
            break;
        case 2:
            system("cls");
            system("src\\menu-scripts\\compresion\\x64\\Debug\\Compresion.exe");
            cin.get();
            break;
        case 3:
            system("cls");
            system("src\\menu-scripts\\cifrado-sustitucion\\cifradoSustitucion\\x64\\Debug\\cifradoSustitucion.exe");
            cin.get();
            break;
        case 4:
            system("cls");
            system("src\\menu-scripts\\cifrado-poligrafico\\cifradoPoligrafico\\x64\\Debug\\cifradoPoligrafico.exe");
            cin.get();
            break;
        case 5:
            break;
        default:
            cout << "Opcion no valida, toque cualquier tecla para intentar nuevamente." << endl;
            cin.ignore();
            cin.get();
            break;
        }

    } while (opcion != 5);

    return 0;
}
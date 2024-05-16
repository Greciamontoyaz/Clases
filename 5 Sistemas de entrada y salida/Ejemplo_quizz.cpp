#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Ingrese el nombre del archivo: ";
    getline(cin, filename);

    fstream file(filename, ios::out | ios::app); // Abrir el archivo en modo de escritura adicional (append mode)

    if (!file) {
        cout << "El archivo no existe. ¿Desea crearlo? (s/n): ";
        char choice;
        cin >> choice;
        if (choice == 's' || choice == 'S') {
            file.open(filename, ios::out); // Crear el archivo
            if (file) {
                cout << "Archivo creado exitosamente." << endl;
            } else {
                cout << "No se pudo crear el archivo." << endl;
            }
        } else {
            cout << "Operación cancelada." << endl;
            return 1; // Salir del programa
        }
    }

    file.close(); // Cerrar el archivo antes de abrirlo de nuevo con otra operación

    cout << "El archivo existe. Elija una opción:" << endl;
    cout << "1. Abrir y escribir en el archivo" << endl;
    cout << "2. Cambiar el nombre del archivo" << endl;
    int opcion;
    cin >> opcion;
    cin.ignore(); // Limpiar el buffer de entrada

    switch (opcion) {
        case 1: {
            file.open(filename, ios::out | ios::app); // Abrir el archivo en modo de escritura adicional (append mode)
            if (file) {
                cout << "Ingrese el texto a agregar al final del archivo:" << endl;
                string input_text;
                getline(cin, input_text);
                file << input_text << endl;
                cout << "Texto agregado al archivo." << endl;
            } else {
                cout << "No se pudo abrir el archivo para escribir." << endl;
            }
            break;
        }
        case 2: {
            cout << "Ingrese el nuevo nombre del archivo:" << endl;
            string new_name;
            getline(cin, new_name);
            if (rename(filename.c_str(), new_name.c_str()) == 0) {
                cout << "El archivo ha sido renombrado exitosamente." << endl;
            } else {
                cout << "Error al intentar renombrar el archivo." << endl;
            }
            break;
        }
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream archivoEntrada("input/archivoEntrada.txt");
    ofstream archivoSalida("input/archivoSalida.txt");

    if (archivoEntrada.is_open() && archivoSalida.is_open()) {
        cout << "Archivo abierto." << endl;

        string linea;

        while (getline(archivoEntrada, linea)) {
            archivoSalida << linea << endl;
        }

        cout << "Archivo copiado correctamente." << endl;
    } else {
        cout << "Error al abrir los archivos." << endl;
    }

    archivoEntrada.close();
    archivoSalida.close();

    return 0;
}

    



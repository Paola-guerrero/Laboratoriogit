

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("input/datos.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo de datos." << endl;
        return 1;
    }

    string linea;

    cout << "Datos leidos del archivo:" << endl;

    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();

    return 0;
}

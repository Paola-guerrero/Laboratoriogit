
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream archivo("input/datos.txt");

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo de datos." << endl;
        return 1;
    }

    int dato;

    cout << "Datos leidos del archivo:" << endl;

    while (archivo >> dato) {
        cout << dato << endl;
    }

    archivo.close();

    return 0;
}

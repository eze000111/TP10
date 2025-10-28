#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;
};

int main() {
    vector<Persona> personas;
    Persona p;
    int n;

    cout << "Cuantas personas desea ingresar?: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nNombre: ";
        cin >> p.nombre;
        cout << "Edad: ";
        cin >> p.edad;
        personas.push_back(p);
    }

    sort(personas.begin(), personas.end(), [](Persona a, Persona b) {
        return a.edad < b.edad;
}

    cout << " Personas ordenadas por edad " << endl;
    for (int i = 0; i < personas.size(); i++) {
        cout << "Nombre: " << personas[i].nombre << " Edad: " << personas[i].edad << endl;
    }

    return 0;
}


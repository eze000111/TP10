#include <iostream>
#include <vector>
using namespace std;

class Alumno {
private:
    string nombre;
    float nota1, nota2, nota3;

public:
    void cargarDatos() {
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Nota 1: ";
        cin >> nota1;
        cout << "Nota 2: ";
        cin >> nota2;
        cout << "Nota 3: ";
        cin >> nota3;
    }

    void mostrarDatos() {
        cout << "Alumno: " << nombre << endl;
        cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << endl;
    }
};

int main() {
    vector<Alumno> alumnos;
    Alumno a;
    int n;

    cout << "Cuantos alumnos desea ingresar? : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Alumno " << i + 1 << endl;
        a.cargarDatos();
        alumnos.push_back(a);
    }

    cout << "Lista de Alumno" << endl;
    for (int i = 0; i < alumnos.size(); i++) {
        alumnos[i].mostrarDatos();
    }

}


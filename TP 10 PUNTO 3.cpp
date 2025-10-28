#include <iostream>
#include <vector>
using namespace std;

class Rectangulo {
private:
    float base, altura;

public:
    void cargarDatos() {
        cout << "Base: ";
        cin >> base;
        cout << "Altura: ";
        cin >> altura;
    }

    float area() {
        return base * altura;
    }

    float perimetro() {
        return 2 * (base + altura);
    }

    void mostrarDatos() {
        cout << "Base: " << base << ", Altura: " << altura;
        cout << "Area: " << area() << ", Perimetro: " << perimetro();

    }
};

int main() {
    vector<Rectangulo> rectangulos;
    Rectangulo r;
    int n;

    cout << "Cuantos rectangulos desea ingresar?: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Rectangulo " << i + 1 << endl;
        r.cargarDatos();
        rectangulos.push_back(r);
    }

    cout << "Resultados" << endl;
    for (int i = 0; i < rectangulos.size(); i++) {
        rectangulos[i].mostrarDatos();
    }

    return 0;
}


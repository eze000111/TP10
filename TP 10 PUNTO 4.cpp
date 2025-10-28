#include <iostream>
#include <vector>
using namespace std;

class CuentaBancaria {
private:
    int numeroCuenta;
    string titular;
    float saldo;

public:
    void cargarDatos() {
        cout << "Numero de cuenta: ";
        cin >> numeroCuenta;
        cout << "Titular: ";
        cin >> titular;
        cout << "Saldo inicial: ";
        cin >> saldo;
    }

    void mostrarDatos() {
        cout << "Cuenta N " << numeroCuenta << "Titular: " << titular << "Saldo: $" << saldo;
    }

    int getNumeroCuenta() {
        return numeroCuenta;
    }

    void depositar(float monto) {
        saldo += monto;
    }

    void retirar(float monto) {
        if (monto <= saldo)
            saldo -= monto;
        else
            cout << "Fondos insuficientes." << endl;
    }
};

int main() {
    vector<CuentaBancaria> cuentas;
    CuentaBancaria c;
    int n;

    cout << "Cuantas cuentas desea ingresar?: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nCuenta " << i + 1 << endl;
        c.cargarDatos();
        cuentas.push_back(c);
    }

    cout << "Lista de Cuentas" << endl;
    for (int i = 0; i < cuentas.size(); i++) {
        cuentas[i].mostrarDatos();
    }

    int cuentaBuscada;
    cout << "\nIngrese el numero de cuenta para operar: ";
    cin >> cuentaBuscada;

    for (int i = 0; i < cuentas.size(); i++) {
        if (cuentas[i].getNumeroCuenta() == cuentaBuscada) {
            int opcion;
            float monto;
            cout << "\n1. Depositar\n2. Retirar\nOpcion: ";
            cin >> opcion;
            cout << "Monto: ";
            cin >> monto;

            if (opcion == 1)
                cuentas[i].depositar(monto);
            else
                cuentas[i].retirar(monto);

            cout << "\nSaldo actualizado:";
            cuentas[i].mostrarDatos();
        }
    }

    
}


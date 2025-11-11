#include <iostream>
#include <vector>
using namespace std;

class cuenta{
public:
    string numero;
    string titular;
    float saldo;

    void cargar(){
        cout<<"numero: ";
        cin>>numero;
        cout<<"titular: ";
        cin>>titular;
        cout<<"saldo inicial: ";
        cin>>saldo;
    }

    void mostrar(){
        cout<<"cuenta: "<<numero<<" titular: "<<titular<<" saldo: "<<saldo<<endl;
    }

    void depositar(float m){
        saldo+=m;
    }

    void retirar(float m){
        if(m>saldo) cout<<"saldo insuficiente\n";
        else saldo-=m;
    }
};

int main(){
    vector<cuenta> v;
    int n;
    cout<<"cuantas cuentas: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cuenta c;
        cout<<"\n-- cuenta "<<i+1<<" --\n";
        c.cargar();
        v.push_back(c);
    }

    cout<<"\n--- cuentas registradas ---\n";
    for(int i=0;i<v.size();i++){
        v[i].mostrar();
    }

    string buscar;
    cout<<"\nnumero de cuenta para operar: ";
    cin>>buscar;

    for(int i=0;i<v.size();i++){
        if(v[i].numero==buscar){
            int op;
            float m;
            cout<<"1 deposito 2 retiro: ";
            cin>>op;
            cout<<"monto: ";
            cin>>m;
            if(op==1) v[i].depositar(m);
            else v[i].retirar(m);
        }
    }

    cout<<"cuentas actualizadas";
    for(int i=0;i<v.size();i++){
        v[i].mostrar();
    }
    return 0;
}


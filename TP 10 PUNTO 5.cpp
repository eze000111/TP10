#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class empleado{
public:
    string nombre;
    float salario;
    string depto;

    void cargar(){
        cout<<"nombre: ";
        cin>>nombre;
        cout<<"salario: ";
        cin>>salario;
        cout<<"departamento: ";
        cin>>depto;
    }

    void mostrar(){
        cout<<"nombre: "<<nombre<<" salario: "<<salario<<" depto: "<<depto<<endl;
    }
};

int main(){
    vector<empleado> v;
    int n;
    cout<<"cuantos empleados: ";
    cin>>n;

    for(int i=0;i<n;i++){
        empleado e;
        cout<<"empleado";
        e.cargar();
        v.push_back(e);
    }

    sort(v.begin(),v.end(),[](empleado a, empleado b){
        return a.salario>b.salario;
    });

    cout<<"empleados ordenados por salario";
    for(int i=0;i<v.size();i++){
        v[i].mostrar();
    }
    return 0;
}


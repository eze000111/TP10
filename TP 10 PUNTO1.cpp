#include <iostream>
#include <vector>
using namespace std;

class alumno{
    string nombre;
    float n1,n2,n3;
public:
    alumno(string nom,float a,float b,float c){
        nombre=nom; n1=a; n2=b; n3=c;
    }
    void mostrar(){
        cout<<"nombre: "<<nombre<<" notas: "<<n1<<", "<<n2<<", "<<n3<<endl;
    }
};

int main(){
    int cant;
    cout<<"cuantos alumnos: ";
    cin>>cant;
    vector<alumno> lista;
    for(int i=0;i<cant;i++){
        string nom; float a,b,c;
        cout<<"nombre: ";cin>>nom;
        cout<<"nota1: ";cin>>a;
        cout<<"nota2: ";cin>>b;
        cout<<"nota3: ";cin>>c;
        lista.push_back(alumno(nom,a,b,c));
    }
    cout<<"alumnos";
    for(auto &x: lista) x.mostrar();
}


#include <iostream>
#include <vector>
using namespace std;

class rectangulo{
public:
    float base, altura;

    void cargar(){
        cout<<"base: ";
        cin>>base;
        cout<<"altura: ";
        cin>>altura;
    }

    float area(){
        return base*altura;
    }

    float perimetro(){
        return 2*(base+altura);
    }

    void mostrar(){
        cout<<"base: "<<base<<" altura: "<<altura<<" area: "<<area()<<" perimetro: "<<perimetro()<<endl;
    }
};

int main(){
    vector<rectangulo> v;
    int n;
    cout<<"cuantos rectangulos: ";
    cin>>n;

    for(int i=0;i<n;i++){
        rectangulo r;
        cout<<"rectangulo ";
        r.cargar();
        v.push_back(r);
    }

    cout<<"resultados";
    for(int i=0;i<v.size();i++){
        v[i].mostrar();
    }
    return 0;
}


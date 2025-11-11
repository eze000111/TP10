#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class persona{
public:
    string nombre;
    int edad;

    void cargar(){
        cout<<"nombre: ";
        cin>>nombre;
        cout<<"edad: ";
        cin>>edad;
    }

    void mostrar(){
        cout<<"nombre: "<<nombre<<" edad: "<<edad<<endl;
    }
};

int main(){
    vector<persona> v;
    int n;
    cout<<"cuantas personas: ";
    cin>>n;

    for(int i=0;i<n;i++){
        persona p;
        cout<<"\n-- persona "<<i+1<<" --\n";
        p.cargar();
        v.push_back(p);
    }

   

    cout<<"\n--- personas ordenadas por edad ---\n";
    for(int i=0;i<v.size();i++){
        v[i].mostrar();
    }
    return 0;
}


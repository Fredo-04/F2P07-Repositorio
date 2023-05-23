#include <iostream>
#include <string>
using namespace std;

class Móvil {
protected:
    string marca;
    string modelo;
    string sistemaOperativo;

public:
    Móvil(string _marca, string _modelo, string _sistemaOperativo)
        : marca(_marca), modelo(_modelo), sistemaOperativo(_sistemaOperativo) {
        cout << "Constructor de Móvil" << endl;
    }

    ~Móvil() {
        cout << "Destructor de Móvil" << endl;
    }
};

class Teléfono : public Móvil {
public:
    Teléfono(string marca, string modelo, string sistemaOperativo)
        : Móvil(marca, modelo, sistemaOperativo) {
        cout << "Constructor de Teléfono" << endl;
    }

    ~Teléfono() {
        cout << "Destructor de Teléfono" << endl;
    }
};

class Tablet : public Móvil {
public:
    Tablet(string marca, string modelo, string sistemaOperativo)
        : Móvil(marca, modelo, sistemaOperativo) {
        cout << "Constructor de Tablet" << endl;
    }

    ~Tablet() {
        cout << "Destructor de Tablet" << endl;
    }
};

int main() {
    Teléfono teléfono("Samsung", "Galaxy S20", "Android");
    cout << endl;
    Tablet tablet("Apple", "iPad Pro", "iOS");

    return 0;
}

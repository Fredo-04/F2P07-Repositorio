#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
    float salario;
    protected:
    string direccionCorreo;

public:
    Persona(string nombre, int edad, float salario, string direccionCorreo)
        : nombre(nombre), edad(edad), salario(salario), direccionCorreo(direccionCorreo) {}

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Salario: " << salario << endl;
    }

    string obtenerDireccionCorreo() {
        return direccionCorreo;
    }
};

class Empleado : public Persona {
public:
    Empleado(string nombre, int edad, float salario, string direccionCorreo)
        : Persona(nombre, edad, salario, direccionCorreo) {}

    void mostrarInformacionEmpleado() {
        mostrarInformacion();
        cout << "Dirección de correo electrónico: " << obtenerDireccionCorreo() << endl;
    }
};

class Cliente : public Persona {
public:
    Cliente(string nombre, int edad, float salario, string direccionCorreo)
        : Persona(nombre, edad, salario, direccionCorreo) {}

    void mostrarInformacionCliente() {
        mostrarInformacion();
        cout << "Dirección de correo electrónico: " << obtenerDireccionCorreo() << endl;
    }
};

int main() {
    Empleado empleado("Juan Pérez", 30, 2500, "juan@example.com");
    Cliente cliente("María López", 25, 0, "maria@example.com");

    empleado.mostrarInformacionEmpleado();
    cout << endl;
    cliente.mostrarInformacionCliente();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Vehiculo{
    protected:
    string marca;
    string modelo;
    int añoFabricacion;
    float precio;
    public:
    Vehiculo();
    Vehiculo(string marca, string modelo, int añoFabricacion, float precio){
        this->marca = marca;
        this->modelo = modelo;
        this->añoFabricacion = añoFabricacion;
        this->precio = precio;
    }
};

class Automovil : public Vehiculo{
    private:
    int numeroPuertas;
    string tipoCombustible;
    public:
    Automovil(string marca, string modelo, int añoFabricacion, float precio, int numeroPuertas, string tipoCombustible)
    : Vehiculo(marca, modelo, añoFabricacion, precio){
        this->numeroPuertas = numeroPuertas;
        this->tipoCombustible = tipoCombustible;
    }
};

class Motocicleta : public Vehiculo{
    private:
    float cilindrada;
    public:
    Motocicleta(string marca, string modelo, int añoFabricacion, float precio, float cilindrada)
    : Vehiculo(marca, modelo, añoFabricacion, precio){
        this->cilindrada = cilindrada;
    }
};
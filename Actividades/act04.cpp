#include <iostream>
#include <string>
using namespace std;
class Cliente{
    private:
    string contrasena;
    protected:
    int dni;
    int nrocuenta;
    float saldo;
    public:
    string nombre;
    Cliente();
    Cliente(string nombre, int dni, int nrocuenta, float saldo){
        this->nombre=nombre;
        this->dni=dni;
        this->nrocuenta=nrocuenta;
        this->saldo=saldo;
    }
    void determinarcontrasena(string contra){
        contrasena=contra;
    }
    protected:
    void encriptarinfo(){
        dni += 100;
        nrocuenta -= 50;
    }
};
class ClientePublico : public Cliente{
    public:
    ClientePublico(string _n, int _d, int _nro, float _sal):Cliente(_n,_d,_nro,_sal){}

};
class ClientePrivado : private Cliente{
    public:
    ClientePrivado(string _n, int _d, int _nro, float _sal):Cliente(_n,_d,_nro,_sal){}
    void metodoprivado(string h){
        encriptarinfo();
    }
};
class ClienteProtected : protected Cliente{
    public:
    ClienteProtected(string _n, int _d, int _nro, float _sal):Cliente(_n,_d,_nro,_sal){}
};
int main(){
    //Tomemos en cuenta que las clases derivadas tiene acceso a los miembros protected y publicos, mas no a los private
    ClientePublico c1("Juan",78954372,1001,30.9);
    ClientePrivado cp1("Maria",72443908,1020,109.3);
    ClienteProtected cpro1("Jose",73981273,1030,48.2);
    //La clase publica puede acceder al atributo y metodo publico dentro del main
    c1.nombre;
    //No es posible acceder al nombre con la clase privada, ya que convierte todos los atributos y metodos en privados, 
    //asi que en el main no será posible acceder
    cp1.metodoprivado("hola"); //pero se puede acceder fuera mediante otras funciones propias pero llamando a las de la base
    cp1.nombre;
    //Asi como con la clase privada, la protected no puede acceder a los valores de la base fuera de ella, 
    //ya que se heredaron como protegidos
    cpro1.nombre;
    return 0;
}
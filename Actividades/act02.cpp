#include <iostream>
#include <string>
using namespace std;
class Cliente{
    protected:
    string nombre;
    int dni;
    int nrocuenta;
    float saldo;
    public:
    Cliente();
    Cliente(string nombre, int dni, int nrocuenta, float saldo){
        this->nombre=nombre;
        this->dni=dni;
        this->nrocuenta=nrocuenta;
        this->saldo=saldo;
    }
    protected:
    void encriptarinfo(){
        dni += 100;
        nrocuenta -= 50;
    }
};
class ClienteSeguro : public Cliente{
    public:
    ClienteSeguro(string _n, int _d, int _nro, float _sal):Cliente(_n,_d,_nro,_sal){encriptarinfo();}
};
int main(){
    ClienteSeguro c1("Juan",78954372,1001,30.9);
    
    return 0;
}
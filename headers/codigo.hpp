#ifndef CODIGO_H_INCLUDED
#define CODIGO_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Codigo{
private:
    string valor;
public:
    bool setValor(string valor);
    string getValor();
    bool validar(string valor);
};
inline string Codigo::getValor(){
    return valor;
}

#endif // CODIGO_H_INCLUDED
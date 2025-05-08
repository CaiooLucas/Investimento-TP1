#include "codigo.hpp"
#include <iostream>
#include <cctype>
bool Codigo::validar(string valor){
    if(valor.size()!=5){
        this->valor = valor;
        throw invalid_argument("Codigo precisa ter exatamente 5 números.");
    }
    for(size_t i=0; i < valor.size(); i++){
        char letra=valor[i];
        if(!isdigit(letra))
            throw invalid_argument("A entrada precisa conter APENAS números.");
    }
    return true;
}
bool Codigo::setValor(string valor) {
    if (validar(valor)) {
        this->valor = valor;
        return true;
    }
    return false;
}
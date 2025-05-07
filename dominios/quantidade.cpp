#include "../headers/quantidade.hpp"
#include <stdexcept>

void Quantidade::validar(int valor){
    if(valor < 1 || valor > LIMITE){
        throw invalid_argument("Quantidade excedida");
    }
}


void Quantidade::setQuant(int valor) {
    validar(valor);
    quant = valor;
    }
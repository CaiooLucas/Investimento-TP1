#include <iostream>
#include "codigo_negociacao.hpp"
using namespace std;

bool Codigo_negociacao::validar(std::string codigo_negociacao){

	if(codigo_negociacao.length() > 12) {
        return false;
	}
    for(char i: codigo_negociacao) {
        if(!(i >= '0' && i <= '9')) {
            if(!(i >= 'a' && i <= 'z')) {
                if(!(i == ' ')) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool Codigo_negociacao::setCodigo_negociacao(std::string codigo_negociacao){
    if (validar(codigo_negociacao)){
        this->codigo_negociacao = codigo_negociacao;
        return true;
    }
    return false;
}

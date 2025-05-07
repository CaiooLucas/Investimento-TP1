#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED
#include <iostream>

using namespace std;

class Codigo_negociacao{
    private:
        std::string codigo_negociacao;
        bool validar(std::string);
    public:
        bool setCodigo_negociacao(std::string);
        std::string getCodigo_negociacao();
    };

inline std::string Codigo_negociacao::getCodigo_negociacao(){
    return codigo_negociacao;
}

#endif // CODIGO_HPP_INCLUDED

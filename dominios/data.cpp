#include "../headers/data.hpp"
#include <string>

using namespace std;

void Data::validar(string valor){
    if(valor.length() != 8){
        throw invalid_argument("Data deve conter exatamente 8 caracteres.");
    }
    for(char c : valor){
        if(!isdigit(c)){
            throw invalid_argument("Caractere invalido. Inclua somente numeros.");
        }
    }
    int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ano = stoi(valor.substr(0,4));
    int mes = stoi(valor.substr(4,2));
    int dia = stoi(valor.substr(6,2));
    if(mes > 12 || mes < 1 || dia < 1){
        throw invalid_argument("Data invalida.");
    }
    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        meses[1] = 29;
    }
    if(dia > meses[mes-1]){
        throw invalid_argument("Data invalida.");
    }
}

void Data::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

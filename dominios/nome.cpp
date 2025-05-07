#include <iostream>
#include "nome.hpp"
using namespace std;

bool Nome::validar(std::string nome){

    if(nome.length() > 20){
        return false; // verificação do tamanho
    }
    char ultimo_caracter;
    for(char i : nome){
        if (ultimo_caracter == ' ' && i == ' '){// comparação entre o char atual e o ultimo para verificar espaços em brancos em sequencia.
            return false;
            }
        if(!(i >= '0' && i <= '9')){ // verifica se não é número
            if(!(i >= 'a' && i <= 'z')){ // verifica se não é letra minuscula
                if (!(i >= 'A' && i <= 'Z')){ // vefica se não é letra maiuscula
                    if(!(i ==' ')){        // verifica se não é espaço em branco
                            return false;
                        }
                    }
                }
            }
        ultimo_caracter = i; // defino o ultimo caracter como i ao fim do loop para comparar com o proximo.
        }
    return true;
}
bool Nome::setNome(std::string nome){
    if (validar(nome)){
        this->nome = nome;
        return true;
    }
    return false;
}

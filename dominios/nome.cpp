#include <iostream>
#include "../headers/nome.hpp"
using namespace std;

bool Nome::validar(std::string nome){

    if(nome.length() > 20){
        return false; // verifica��o do tamanho
    }
    char ultimo_caracter;
    for(char i : nome){
        if (ultimo_caracter == ' ' && i == ' '){// compara��o entre o char atual e o ultimo para verificar espa�os em brancos em sequencia.
            return false;
            }
        if(!(i >= '0' && i <= '9')){ // verifica se n�o � n�mero
            if(!(i >= 'a' && i <= 'z')){ // verifica se n�o � letra minuscula
                if (!(i >= 'A' && i <= 'Z')){ // vefica se n�o � letra maiuscula
                    if(!(i ==' ')){        // verifica se n�o � espa�o em branco
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

#ifndef SENHA_HPP
#define SENHA_HPP
#include <iostream>
#include <string>


using namespace std;


class Senha {
    private:
        string senha;
        void validar(string);
    public:
        void setSenha(string);
        string getSenha();
    };

inline string Senha::getSenha() {
    return senha;
}

inline void Senha::setSenha(string senha) {
    validar(senha);
    this->senha = senha;

}



#endif // SENHA_HPP

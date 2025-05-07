#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED
#include <iostream>

using namespace std;

class Nome{
    private:
        std::string nome;
        bool validar(std::string);
    public:
        bool setNome(std::string);
        std::string getNome();
    };

inline string Nome::getNome(){
    return nome;
}

#endif // NOME_HPP_INCLUDED

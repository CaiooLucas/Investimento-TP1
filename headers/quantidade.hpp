#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED 
#include <string>
using namespace std;

class Quantidade {
    private:
        static const int LIMITE = 1e6;
        static const int DEFAULT = 1;
        int quant;
        void validar(int valor);
       
    public:
        void setQuant(int valor);
        int getQuant();
 
};

inline int Quantidade::getQuant(){
        return quant;
    }

#endif // DOMINIOS_HPP_INCLUDED 
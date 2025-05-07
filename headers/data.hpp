#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Data{
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Data::getValor() const{
    return valor;
}

#endif // DATA_HPP_INCLUDED

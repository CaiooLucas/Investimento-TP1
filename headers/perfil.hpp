#ifndef PERFIL_HPP
#define PERFIL_HPP
#include <iostream>
#include <string>

class PerfilInvestidor {
    private:
        int perfil;
        void validarPerfil(int valor);
    
    public:
        void setPerfil(int escolha);
        std::string getPerfil();
        
    };
    
    #endif // PERFIL_HPP
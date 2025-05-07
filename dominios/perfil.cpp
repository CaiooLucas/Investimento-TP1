#include "../headers/perfil.hpp"
    
void PerfilInvestidor::setPerfil(int escolha){
        validarPerfil(escolha);
        perfil = escolha;
}

std::string PerfilInvestidor::getPerfil(){
    if(perfil == 1){
        return "Conservador";
        } 
    else if (perfil == 2){ 
        return "Moderado";
        }
     else if (perfil == 3){
        return "Agressivo";
        }
    else{
        return "Indefinido";
        }
}   

void PerfilInvestidor::validarPerfil(int valor){
        if(valor < 1 || valor > 3 ) {
            throw std::invalid_argument("Perfil deve ser um número de 1 a 3.");
        }
}  


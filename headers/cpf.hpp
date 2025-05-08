#ifndef CPF_HPP
#define CPF_HPP

#include <string>

class CPF {
private:
    std::string digits;  // Apenas os 11 dígitos numéricos do CPF

    void validar() const;

public:
    explicit CPF(const std::string& input);

    bool todosDigitosIguais() const;   

    std::string formatar() const;
};

#endif
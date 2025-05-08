#include "../headers/cpf.hpp"
#include <algorithm>
#include <cctype>
#include <iostream>

CPF::CPF(const std::string& input) {
    for (char c : input) {
        if (std::isdigit(static_cast<unsigned char>(c))) {
            digits += c;
        }
    }
}

// Verifica se todos os digitos do cpf são iguais 
bool CPF::todosDigitosIguais() const {
    if (digits.size() < 1) return false;
    return std::all_of(digits.begin(), digits.end(),
                       [this](char c){ return c == digits[0]; });
}


// Verifica se o cpf é do tamanho certo
void CPF::validar() const {
    if (digits.size() != 11 || todosDigitosIguais()) {
        throw std::invalid_argument("CPF inválido");
    }
    auto calcularDigito = [](const std::string& base, int pesoInicial) {
        int soma = 0;
        for (char c : base) {
            soma += (c - '0') * pesoInicial--;
        }
        int resto = soma % 11;
        return (resto < 2) ? 0 : 11 - resto;
    };

    int d1 = calcularDigito(digits.substr(0, 9), 10);
    int d2 = calcularDigito(digits.substr(0, 9) + std::to_string(d1), 11);

    if (!(d1 == (digits[9] - '0')) && (d2 == (digits[10] - '0'))){
        throw std::invalid_argument ("CPF inválido");
    }
}

// formata o cpf no padrão XXX.XXX.XXX-XX
std::string CPF::formatar() const {
    if (digits.size() != 11) {
        return digits;
    }
    return digits.substr(0, 3) + "." +
           digits.substr(3, 3) + "." +
           digits.substr(6, 3) + "-" +
           digits.substr(9, 2);
}

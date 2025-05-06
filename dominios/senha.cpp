#include <iostream>
#include <string>
#include "../headers/senha.hpp"
#include <cctype>
using namespace std;

void Senha::validar(string senha) {
    if (senha.length() != 6) {
        throw invalid_argument("Senha deve conter exatamente 6 caracteres");
    }

    bool temDigito = false;
    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temEspecial = false;

    for (int i = 0; i < senha.size(); ++i) {
        char c = senha[i];

        if (!(isdigit(c) || isalpha(c) || c == '#' || c == '$' || c == '%' || c == '&')) {
            throw invalid_argument("Caractere inválido na senha");
        }

        for (int j = i + 1; j < senha.size(); ++j) {
            if (c == senha[j]) {
                throw invalid_argument("Senha não pode ter caracteres duplicados");
            }
        }

        if (isdigit(c)) {
            temDigito = true;
        } else if (isupper(c)) {
            temMaiuscula = true;
        } else if (islower(c)) {
            temMinuscula = true;
        } else {
            temEspecial = true;
        }
    }

    if (!(temDigito && temMaiuscula && temMinuscula && temEspecial)) {
        throw invalid_argument("Senha deve conter pelo menos um dígito, uma maiúscula, uma minúscula e um especial");
    };
}


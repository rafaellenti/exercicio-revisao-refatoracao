#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
    public:
        Engenheiro (double SalarioHora, std::string Nome, int Projetos) :
        Empregado (SalarioHora), nome (Nome), projetos (Projetos) {};

        void imprimirAtributos (double horas) override;

    private:
	    int projetos;
        std::string nome;
};

#endif
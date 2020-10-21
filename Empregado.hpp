#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
    public:
        Empregado (double SalarioHora) : salarioHora (SalarioHora) {};
        double pagamentoMes(double horasTrabalhadas);
        virtual void imprimirAtributos (double horas) {}

	  private:
        double salarioHora;  
};

#endif
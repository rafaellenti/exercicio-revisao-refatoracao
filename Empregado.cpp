#include "Empregado.hpp"
#define CARGA_HORARIA 8

double Empregado::pagamentoMes(double horasTrabalhadas) {
    double t = horasTrabalhadas;
	
    if (horasTrabalhadas > CARGA_HORARIA) {
        double x = horasTrabalhadas - CARGA_HORARIA;
        t += x / 2;
    }
	return t * salarioHora;
}
#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  	public:
	    double quotaTotalAnual();

	    Vendedor (double SalarioHora, double QuotaMensalVendas, std::string Nome) :
	    Empregado (SalarioHora), quotaMensalVendas(QuotaMensalVendas), nome (Nome) {};

        void imprimirAtributos (double horas) override;
	  
	private:
	    std::string nome;
        double quotaMensalVendas; 
};

#endif
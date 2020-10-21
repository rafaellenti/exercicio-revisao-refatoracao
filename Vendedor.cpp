#include "Vendedor.hpp"
#define MESES 12

double Vendedor::quotaTotalAnual() {
	return  quotaMensalVendas * MESES;
}

void Vendedor::imprimirAtributos (double horas) {
	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;  
	std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
}
	  


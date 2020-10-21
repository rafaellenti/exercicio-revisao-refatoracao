#include "Engenheiro.hpp"

void Engenheiro::imprimirAtributos (double horas) {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Salario Mes: " << pagamentoMes(horas) << std::endl;
    std::cout << "Projetos: " << projetos << std::endl;
}



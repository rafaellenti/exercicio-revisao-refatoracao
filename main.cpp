#include "Engenheiro.hpp"
#include "Empregado.hpp"
#include "Vendedor.hpp"
#include <vector>

int main() {
    std::vector<Empregado*> empregados;
    empregados.push_back(new Engenheiro(35,"Joao Snow",3));
    empregados.push_back(new Engenheiro(30,"Daniela Targaryen",1));
    empregados.push_back(new Engenheiro(30,"Bruno Stark",2));
    empregados.push_back(new Vendedor(20,5000,"Tonho Lannister"));
    empregados.push_back(new Vendedor(25,3000,"Jose Mormont"));
    empregados.push_back(new Vendedor(30,4000,"Sonia Stark"));

    for (int i=0; i<empregados.size(); i++) {
        if (i != 0) 
            std::cout << std::endl;
        if (i == 0) {
            empregados[i]->imprimirAtributos(9.5);
        } else if (i == 1 || i == 2 || i == 4 || i == 5) {
            empregados[i]->imprimirAtributos(8);
        } else if (i == 3) {
          empregados[i]->imprimirAtributos(6);
        }
    }

    for (Empregado* emp : empregados)
        delete emp;
    empregados.clear();

    return 0;	
}
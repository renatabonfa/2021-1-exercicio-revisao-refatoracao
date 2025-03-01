#ifndef IMOVEL_HPP
#define IMOVEL_HPP

#include <iostream>
#include <iomanip>
#include "Cliente.hpp"

using namespace std;

class Imovel {
    public:
        double area;
        int quartos;
        int banheiros;
        int vagas;
        double valor_por_m2;
        double valor_de_venda;
        double valor_da_comissao;
        Cliente vendedor;
        string corretor;

        Imovel ();

        void construtora (string corretor_, double area_, int quartos_, int banheiros_, int vagas_, double valor_por_m2_, Cliente cl);


        double valor ();
        
        double comissao(double taxa_de_comissao);
        
        void print(string tipo_de_imovel, double taxa_de_comissao);

};

#endif
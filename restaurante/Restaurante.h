//
// Created by rodrigo on 6/27/19.
//

#ifndef RESTAURANTE_RESTAURANTE_H
#define RESTAURANTE_RESTAURANTE_H

#include "mesas.h"
#include "Cliente.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Restaurante {
    int capacidad;
    int ocupados;
    vector<Cliente> clientes_restaurante;
    vector<Mesa*> mesas_restaurante;
public:
    Restaurante(int cap) : capacidad {cap}, ocupados{0}{
        for(int i=0;i<capacidad;i++)
            mesas_restaurante.push_back(new Mesa(i,false));
    }


    void attach(Cliente cliente_){
        if(capacidad>clientes_restaurante.size()) {
            clientes_restaurante.push_back(cliente_);
            mesas_restaurante[ocupados]->update(true);
            clientes_restaurante[ocupados].setmesa(mesas_restaurante[ocupados]);
            ocupados++;
        }
        else
            cout<<"Hubo un error"<<endl;

    };



    void detach(Cliente cliente_){
        for(int i=0;i<clientes_restaurante.size();i++)
            if(clientes_restaurante[i]==cliente_){
                clientes_restaurante.erase(clientes_restaurante.begin() + i);
            }
    }


};


#endif //RESTAURANTE_RESTAURANTE_H

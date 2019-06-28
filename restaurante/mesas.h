//
// Created by rodrigo on 6/27/19.
//

#ifndef RESTAURANTE_MESAS_H
#define RESTAURANTE_MESAS_H

#include "Cliente.h"

class Mesa{
    int mesa_id;
    Cliente * cliente;
    bool state;
public:
    Mesa(int id, bool state_) :
    mesa_id{id}, state{state_} {}
    void update(bool state_){state=state_;};
    int getid(){return mesa_id;};
    void setcliente(Cliente* cliente_){cliente=cliente_;}

};



#endif //RESTAURANTE_MESAS_H

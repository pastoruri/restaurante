//
// Created by rodrigo on 6/27/19.
//

#ifndef RESTAURANTE_CLIENTE_H
#define RESTAURANTE_CLIENTE_H

#include "mesas.h"

class Cliente {
    Mesa * client_mesa;
    int client_id;
public:
    Cliente(Mesa client_mesa_,int id ) : client_mesa{&client_mesa_}, client_id{id}{}
    int getid(){return client_id;};
    int getmesa(){return client_mesa->getid();}

    bool operator==(Cliente cl){
        if(client_id==cl.getid())
            return true;
    }

    void setmesa(Mesa* client_mesa_) { client_mesa=client_mesa_;}

};


#endif //RESTAURANTE_CLIENTE_H

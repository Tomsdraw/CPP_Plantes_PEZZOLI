#ifndef PLANTE_H
#define PLANTE_H

#include <string>

#include "Plantes.h"

class Plante : public Plantes{
    
    public:
    
        Plante(std::string name);
        
        void engrais();
        void tailler();
        void arroser();
        void pousse();
        void check();
};  


#endif
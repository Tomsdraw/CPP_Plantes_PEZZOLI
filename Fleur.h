#ifndef FLEUR_H
#define FLEUR_H

#include <string>

#include "Plantes.h"

class Fleur : public Plantes{
    
    public:
    
        Fleur(std::string name);
        
        void engrais();
        void tailler();
        void arroser();
        void pousse();
        void check();
};  


#endif
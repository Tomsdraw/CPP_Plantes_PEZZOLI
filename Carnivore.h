#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <string>

#include "Plantes.h"

class Carnivore : public Plantes{
    
    public:
    
        Carnivore(std::string name);
        
        void engrais();
        void nourrir();
        void tailler();
        void arroser();
        void pousse();
        void check();
};  


#endif
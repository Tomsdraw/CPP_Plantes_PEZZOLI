#include "Botaniste.h"
#include "Plante.h"
#include <string>
#include <iostream>

#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

    Botaniste::Botaniste(std::string name, int _qtArgent, int _jour):_nom(name), _qtArgent(50), _jour(1)  {}
    

    void Botaniste::ajouterEngrais(Plantes * cible){
        (*cible).engrais();
    }
    
    void Botaniste::taillerPlante(Plantes* cible){
        (*cible).tailler();
    }
  
    void Botaniste::arroserPlante(Plantes * cible){
        (*cible).arroser();
    }
    
    void Botaniste::dormir(){
        std::cout << "Bonne nuit " << _nom <<"a demain !" <<std::endl;
        _jour++;
        std::cout << "_________ JOUR " << _jour <<" _________" <<std::endl;
    }
    
    void Botaniste::vendre(){
        
    }
    
    void Botaniste::affiche(){
        std::cout << "Bonjour " << _nom <<" vous avez " << _qtArgent << " d'argent." <<std::endl;
    }
    

    
#endif
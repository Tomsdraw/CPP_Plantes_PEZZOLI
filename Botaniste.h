#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <vector>
#include "Plante.h"
#include "Plantes.h"

class Botaniste{
  protected:
    int _qtArgent;
    int _jour;
    std::string _nom;
    
  public:
    void ajouterEngrais(Plantes * cible);
    void taillerPlante(Plantes * cible);
    void arroserPlante(Plantes * cible);
    
    void dormir();
    void vendre();
    void affiche();
    
    void check();
    Botaniste(std::string name, int argent, int jour);



};


#endif

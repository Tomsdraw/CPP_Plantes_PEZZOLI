#ifndef PLANTES_H
#define PLANTES_H

#include <string>

class Plantes{
    protected:
        std::string _nom;
        int _hydratation;
        int _faim;
        int _sante;
        int _maturite;
        int _boost;
        int _ntaille;
        int _nhydrate;
        int _prix;
        int _nfloraison;
        int _floraison;
        int _fanee;
        
    public:
    
        Plantes(std::string name);
        
        void engrais();
        void nourrir();
        void tailler();
        void arroser();
        void pousse();
        
        void check();
        
};

#endif
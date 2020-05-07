#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP

#include <string>
#include "Carnivore.h"
#include <iostream>

    Carnivore::Carnivore(std::string name) : Plantes(name) {}
    
    void Carnivore::engrais(){
        if(_boost==1){
            std::cout << "Vous avez déjà donné de l'engrais a votre " << _nom << " aujourd'hui !" << std::endl; 
        }
    
        if(_boost==0){
            std::cout << "Vous donner un peu d'engrais à votre " << _nom << std::endl; 
            _boost=1;
        }
        
    }
    
    void Carnivore::nourrir(){
        std::cout << "Vous nourrissez votre "<< _nom << std::endl;
        _faim-=10;
    }
    
    void Carnivore::tailler(){
        std::cout << "Vous taillez votre "<< _nom << std::endl;
        _ntaille+=2;
    }
    
    void Carnivore::arroser(){
         std::cout << "Vous arrosez votre "<< _nom << std::endl;
         _hydratation += 10;
         _nhydrate+=2;
    }
    
    void Carnivore::pousse(){
            std::cout << "Votre "<< _nom << " pousse !" << std::endl;
            
        _hydratation-=5;
        _faim+=5;
            
        if(_ntaille>5){
            std::cout <<"mais vous avez trop taillé votre "<< _nom << " sa santé baisse..." << std::endl;
            _sante-=5;
        }
        if(_nhydrate>7){
            std::cout << "mais vous avez trop arrosé votre "<< _nom << ", vous l'avez noyé(e) "<<" sa santé baisse..." << std::endl;
            _sante-=10;
        }
        
        if (_boost==1) _maturite+=5;
        if(_sante>60) _maturite+=15;
        if(_sante<60) _maturite+=10;
        _boost=0;
        
        
        
        if(_sante<=0) delete this;
        
    }
    
    void Carnivore::check(){
       std::cout << _nom << " a une hydratation de " << _hydratation <<"/100" << " une santé de "  << _sante << "/100" <<" une maturite de " <<_maturite<<"/100"<<" et une faim de " << _faim <<"/100" << std::endl;
    }
#endif
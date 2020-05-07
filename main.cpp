#include <iostream>
#include "Plante.h"
#include "Fleur.h"
#include "Carnivore.h"
#include "Botaniste.h"

using namespace std;

int main(){
    char pseudo[50];
    int userInput;
    
    std::cout << "Quel est votre pseudo ?" << std::endl;
    cin >> pseudo;
    Botaniste * moi = new Botaniste(pseudo, 0,0);
    
    Plante * plantie = new Plante("plante");
    Carnivore * carnie = new Carnivore("plante carnivore");
    Fleur * flowey = new Fleur("fleur");
    
    plantie->check();
    plantie->engrais();
    plantie->arroser();
    plantie->arroser();
    plantie->arroser();
    plantie->arroser();
    plantie->tailler();
    plantie->pousse();
    plantie->check();
    
    carnie->check();
    carnie->engrais();
    carnie->nourrir();
    carnie->pousse();
    carnie->check();
    
    flowey->check();
    flowey->engrais();
    flowey->engrais();
    flowey->pousse();
    flowey->pousse();
    flowey->check();
    
    moi->dormir();
    
    
    return 0;
}

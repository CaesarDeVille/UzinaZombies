#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>
#include "Arme.h"

using namespace std;

class Zombie
{
private:
	int pv = 100;
	string nom = "Bob";
	int attack = 10;
	int armure = 10;

public:
    //CONSTRUCTEURS
    Personnage();
    Personnage(int p, int a, float pc);
    Personnage(string n);


    //DESTRUCTEUR
    ~Personnage();

    //GETTER/SETTER PV
	int getPv() const;
	void setPv(int s);

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);


    //GETTER/SETTER ATTACK
	int getAttack() const;
	void setAttack(int a);

    //GETTER/SETTER ARMURE
	int getArmure() const;
	void setArmure(int d);

    //AFFICHE LES INFOS DU PERSO
	void showInfos() const;

    void attackPlayer(Personnage* cible);

    bool operator==(Personnage & p);

    Personnage operator+(Personnage const & p);
    void operator+=(Personnage const & p);

    bool operator!=(Personnage & p);
};

#endif // PERSONNAGE_H

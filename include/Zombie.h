#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie
{
private:
	int pv = 100;
	string nom = "Bob";
	int attack = 10;
	int armure = 0;

public:
    //CONSTRUCTEURS
    Zombie();
    Zombie(int z, int a, float pc);
    Zombie(string n);


    //DESTRUCTEUR
    ~Zombie();

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

    void attackPlayer(Zombie* cible);

    bool operator==(Zombie & z);

    Zombie operator+(Zombie const & z);
    void operator+=(Zombie const & z);

    bool operator!=(Zombie & z);
};

#endif // ZOMBIE_H
